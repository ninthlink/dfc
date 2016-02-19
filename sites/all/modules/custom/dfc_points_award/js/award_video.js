(function ($) {
  Drupal.behaviors.awardPointsVideo = {
    attach: function (context, settings) {
      if ( $('body').hasClass('section-clubhouse') ) {
        var thisnid = Drupal.settings.dfcPointsAward.vid;
        // hook to gallery
        var thiscar = $('.field--image-gallery');
        if ( thiscar.size() > 0 ) {
          // wrap in timeout delay so it fires after owl-carousel init?
          setTimeout( function() { 
            var thisowlc = thiscar.children('.owl-carousel');
            var thisowl = thisowlc.data('owlCarousel');
            thisowlc.bind('owlcheck', function() {
              $(this).find('.owl-item:eq('+thisowl.currentItem+')').removeClass('unseen');
              if ( $(this).find('.unseen').size() == 0 ) {
                console.log('you have viewed all for '+ thisnid +' !!');
                
                var url = '/dfc/points/grant/slideshow/' + thisnid +'/'+ thisowl.itemsAmount;
                $.get(url, function(data) {
                  console.log('got it');
                  //console.log(data);
                });
              } else {
                console.log('keep going..');
              }
            }).find('.owl-item:gt(0)').addClass('unseen');
            thisowlc.find('.owl-next, .owl-prev').bind('click', function() {
              thisowlc.trigger('owlcheck');
            });
          }, 300 );
        }
      }
      
      if ( $('body').hasClass('section-fab-52-resorts') ) {
        if ( $('.node--resort:not(.checkd)').size() > 0 ) {
          $('.node--resort:not(.checkd)').each(function() {
            $(this).addClass('checkd');
            // fix price showup?
            if ( $(this).find('.field--resort-category .group-resort-price').size() < 1 ) {
              $(this).find('.field--resort-category').append('<div class="group-resort-price" />');
            }
            var thisnid = $(this).find('.share_vid').data('share-vid');
            // hook to share btns
            if ($(this).find('.st_facebook_custom:not(.dfc_hookd)').size() > 0) {
              $(this).find('.st_facebook_custom').addClass('dfc_hookd').click(function() {
                var url = '/dfc/points/grant/share/fb/' + thisnid;
                $.get(url, function(data) {
                  console.log('got it');
                  //console.log(data);
                });
              }).append('<span class="dfc-point-value"><span>5</span> Points</span>');
            }
            if ($(this).find('.st_twitter_custom:not(.dfc_hookd)').size() > 0) {
              $(this).find('.st_twitter_custom').addClass('dfc_hookd').click(function() {
                var url = '/dfc/points/grant/share/tw/' + thisnid;
                $.get(url, function(data) {
                  console.log('got it');
                  //console.log(data);
                });
              }).append('<span class="dfc-point-value"><span>5</span> Points</span>');
            }
            // hook to gallery
            var thiscar = $(this).find('.field--image-gallery');
            if ( thiscar.size() > 0 ) {
              // wrap in timeout delay so it fires after owl-carousel init?
              setTimeout( function() {
                var thisowlc = thiscar.children('.owl-carousel');
                var thisowl = thisowlc.data('owlCarousel');
                if ( thisowl === null ) {
                  // somehow no owl yet, so re init
                  console.log(settings['owlcarousel']['owlcarousel-fields-64']['settings']);
                  thiscar.children('.owlcarousel-fields-64').owlCarousel(settings['owlcarousel']['owlcarousel-fields-64']['settings']);
                  thisowlc = thiscar.children('.owl-carousel');
                  thisowl = thisowlc.data('owlCarousel');
                }
                thisowlc.bind('owlcheck', function() {
                  $(this).find('.owl-item:eq('+thisowl.currentItem+')').removeClass('unseen');
                  if ( $(this).find('.unseen').size() == 0 ) {
                    console.log('you have viewed all for '+ thisnid +' !!');
                    
                    var url = '/dfc/points/grant/slideshow/' + thisnid +'/'+ thisowl.itemsAmount;
                    $.get(url, function(data) {
                      console.log('got it');
                      //console.log(data);
                    });
                  } else {
                    console.log('keep going..');
                  }
                }).find('.owl-item:gt(0)').addClass('unseen');
                thisowlc.find('.owl-next, .owl-prev').bind('click', function() {
                  thisowlc.trigger('owlcheck');
                });
              }, 300 );
              
              // also inject html of points / video underneaf
              thiscar.append('<div class="pt-values"><span class="vid"><strong>10</strong> Points</span><span class="img"><strong>5</strong> Points</span></div>');
            }
          });
        } else {
          // must have just filtered search?
          var fval = $('#edit-combine').val();
          if ( fval !== '' ) {
            // searched for something : scroll to the top of the ad above Resorts
            var rtop = $('#block-views-banner-ads-block').offset();
            $('html,body').animate({
              scrollTop: rtop.top
            }, 'normal');
          }
        }
      }
      
      if ( $('body').hasClass('section-pro-staff') ) {
        $('.node--staff').each(function() {
          var thisnid = $(this).find('.share_vid').data('share-vid');
          // hook to share btns
          if ($(this).find('.st_facebook_custom:not(.dfc_hookd)').size() > 0) {
            $(this).find('.st_facebook_custom').addClass('dfc_hookd').click(function() {
              var url = '/dfc/points/grant/share/fb/' + thisnid;
              $.get(url, function(data) {
                console.log('got it');
                //console.log(data);
              });
            }).append('<span class="dfc-point-value"><span>5</span> Points</span>');
          }
          if ($(this).find('.st_twitter_custom:not(.dfc_hookd)').size() > 0) {
            $(this).find('.st_twitter_custom').addClass('dfc_hookd').click(function() {
              var url = '/dfc/points/grant/share/tw/' + thisnid;
              $.get(url, function(data) {
                console.log('got it');
                //console.log(data);
              });
            }).append('<span class="dfc-point-value"><span>5</span> Points</span>');
          }
          
          // hook to gallery
          var thiscar = $(this).find('.field--image-gallery');
          if ( thiscar.size() > 0 ) {
            // wrap in timeout delay so it fires after owl-carousel init?
            setTimeout( function() {
              var thisowlc = thiscar.children('.owl-carousel');
              var thisowl = thisowlc.data('owlCarousel');
              if ( thisowl === null ) {
                // somehow no owl yet, so re init
                thiscar.children('.owlcarousel-fields-115').owlCarousel(settings['owlcarousel']['owlcarousel-fields-115']['settings']);
                thisowlc = thiscar.children('.owl-carousel');
                thisowl = thisowlc.data('owlCarousel');
              }
              if ( thisowl.itemsAmount > 1 ) {
                thisowlc.bind('owlcheck', function() {
                  $(this).find('.owl-item:eq('+thisowl.currentItem+')').removeClass('unseen');
                  if ( $(this).find('.unseen').size() == 0 ) {
                    console.log('you have viewed all for '+ thisnid +' !!');
                    
                    var url = '/dfc/points/grant/slideshow/' + thisnid +'/'+ thisowl.itemsAmount;
                    $.get(url, function(data) {
                      console.log('got it');
                      //console.log(data);
                    });
                  } else {
                    console.log('keep going..');
                  }
                }).find('.owl-item:gt(0)').addClass('unseen');
                thisowlc.find('.owl-next, .owl-prev').bind('click', function() {
                  thisowlc.trigger('owlcheck');
                });
              }
            }, 300 );
            // also inject html of points / video underneaf
            thiscar.append('<div class="pt-values"><span class="vid"><strong>10</strong> Points</span><span class="img"><strong>5</strong> Points</span></div>');
          }
        });
      }
      
      if ( $('body').hasClass('node-type-media-item') ) {
        // quick fix move ad inline
        if ( $('.block--views-banner-ads-block-1').size() > 0 ) {
          if ( $('.node--full .field--media-category').size() > 0 ) {
            $('.block--views-banner-ads-block-1').insertBefore( $('.node--full .field--media-category') );
          }
        }
        var player = $('iframe');
        var playerOrigin = '*';
        var status = $('.status');
        var awarded = Drupal.settings.dfcPointsAward.awarded;
        var threshold = Drupal.settings.dfcPointsAward.threshold;
        
  //      var ondetailspage = $('body').hasClass(')
        
        // hook to share buttons
        // Only run if the link exists in the current page load or fragment refresh.
        if ($('.st_facebook_custom:not(.dfc_hookd)').size() > 0) {
          $('.st_facebook_custom').addClass('dfc_hookd').click(function() {
            var nid = Drupal.settings.dfcPointsAward.vid;
            var url = '/dfc/points/grant/share/fb/' + nid;
            $.get(url, function(data) {
              console.log('got it');
              //console.log(data);
            });
          }).append('<span class="dfc-point-value"><span>5</span> Points</span>');
        }
        if ($('.st_twitter_custom:not(.dfc_hookd)').size() > 0) {
          $('.st_twitter_custom').addClass('dfc_hookd').click(function() {
            var nid = Drupal.settings.dfcPointsAward.vid;
            var url = '/dfc/points/grant/share/tw/' + nid;
            $.get(url, function(data) {
              console.log('got it');
              //console.log(data);
            });
          }).append('<span class="dfc-point-value"><span>5</span> Points</span>');
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
		
        // video player listener code for awarding...
        
        // Listen for messages from the player
        if (window.addEventListener) {
          window.addEventListener('message', onMessageReceived, false);
        }
        else {
          window.attachEvent('onmessage', onMessageReceived, false);
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
    }
  };
})(jQuery);