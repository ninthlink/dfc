(function ($) {
  Drupal.behaviors.user = {
    attach: function (context, settings) {
      var attachHandlers = function (target) {
        $(target).click(function (e, stop) {
          //console.log('c');
          if (!stop) {
            console.log(target + ' input');
            $(target + ' input').trigger('click', ['stop']).bind('change', function() {

            //$('#edit-field-image input').trigger('click', ['stop']).bind('change', function() {
              $('#user-media-node-form').submit();
            });
          }
        });
      }
      attachHandlers('#edit-field-media-link');
      attachHandlers('#edit-field-image');
      
      if ( $('#better-messages-wrapper').size() > 0 ) {
        $('#better-messages-wrapper').fadeIn('normal');
        setTimeout(function() {
          $('#better-messages-wrapper').fadeOut('slow');
        }, 6000 );
      }
    }
  };
})(jQuery);