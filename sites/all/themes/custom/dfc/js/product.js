(function ($) {
  Drupal.behaviors.productImages = {
    attach: function (context, settings) {
      var width = '535px';
      $('#main-image').html($('.field--product-image img:first').clone());

      $('.field--product-image img').click(function () {
        $('#main-image').html($(this).clone());
        $('#main-image img').width(width);
      });

      $('.images-enlarge').click(function() {
        var img = $('#main-image img');
        var container = $('.main-content');
        if (!container.hasClass('expanded')) {
          width = '100%';
          container.addClass('expanded')
          $(this).text('- reduce');
        } else {
          width = '535px';
          container.removeClass('expanded')
          $(this).text('+ enlarge');
        }
        container.width(width);
        img.width(width);
      });
    }
  };
})(jQuery);