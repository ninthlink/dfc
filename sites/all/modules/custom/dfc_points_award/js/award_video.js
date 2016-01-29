(function ($) {
  Drupal.behaviors.awardPointsVideo = {
    attach: function (context, settings) {
      var player = $('iframe');
      var playerOrigin = '*';
      var status = $('.status');
      var awarded = Drupal.settings.dfcPointsAward.awarded;
      var threshold = Drupal.settings.dfcPointsAward.threshold;
      
      // hook to share buttons
      // Only run if the link exists in the current page load or fragment refresh.
      if ($('.st_facebook_custom:not(.dfc_hookd)').size() > 0) {
        $('.st_facebook_custom').addClass('dfc_hookd').click(function() {
          console.log('clicked fb');
          var nid = Drupal.settings.dfcPointsAward.vid;
          var url = '/dfc/points/grant/share/fb/' + nid;
          $.get(url, function(data) {
            console.log('got it');
            //console.log(data);
          });
        });
      }
      if ($('.st_twitter_custom:not(.dfc_hookd)').size() > 0) {
        $('.st_twitter_custom').addClass('dfc_hookd').click(function() {
          console.log('clicked tw');
          var nid = Drupal.settings.dfcPointsAward.vid;
          var url = '/dfc/points/grant/share/tw/' + nid;
          $.get(url, function(data) {
            console.log('got it');
            //console.log(data);
          });
        });
      }
      
      
      // video player listener code for awarding...
      
      // Listen for messages from the player
      if (window.addEventListener) {
        window.addEventListener('message', onMessageReceived, false);
      }
      else {
        window.attachEvent('onmessage', onMessageReceived, false);
      }

      // Handle messages received from the player
      function onMessageReceived(event) {
        // Handle messages from the vimeo player only
        if (!(/^https?:\/\/player.vimeo.com/).test(event.origin)) {
          return false;
        }

        if (playerOrigin === '*') {
          playerOrigin = event.origin;
        }

        var data = JSON.parse(event.data);

        switch (data.event) {
          case 'ready':
            onReady();
            break;

          case 'playProgress':
            onPlayProgress(data.data);
            break;

          case 'pause':
            //onPause();
            break;

          case 'finish':
            //onFinish();
            break;
        }
      }

      // Helper function for sending a message to the player
      function post(action, value) {
        var data = {
          method: action
        };

        if (value) {
          data.value = value;
        }

        var message = JSON.stringify(data);
        player[0].contentWindow.postMessage(message, playerOrigin);
      }

      function onReady() {
        post('addEventListener', 'pause');
        post('addEventListener', 'finish');
        post('addEventListener', 'playProgress');
      }

      function onPlayProgress(data, id) {console.log(data.seconds);
        if (data.seconds > threshold && !awarded) {console.log('awarded');
          var nid = Drupal.settings.dfcPointsAward.vid;
          var vcode = Drupal.settings.dfcPointsAward.vcode;
          var url = '/dfc/points/grant/video/' + nid + '/' + vcode;
          $.get(url, function(data) {
            console.log(data);
          });
          awarded = true;
        }
      }
    }
  };
})(jQuery);