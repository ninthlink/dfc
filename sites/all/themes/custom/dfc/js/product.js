(function ($) {
  Drupal.behaviors.productImages = {
    attach: function (context, settings) {
      $('#main-image').html($('.field--product-image img:first').clone());

      $('.field--product-image img').click(function () {
        $('#main-image').html($(this).clone());
      });

      $('.images-enlarge').click(function() {
        var img = $('#main-image img');
        var container = $('.main-content');
        var width = '535px';
        if (!container.hasClass('expanded')) {
          container.addClass('expanded').width('100%');
          img.width('100%');
          $(this).text('- reduce');
        } else {
          container.removeClass('expanded').width(width);
          img.width(width);
          $(this).text('+ enlarge');
        }
      });
    }
  };
})(jQuery);