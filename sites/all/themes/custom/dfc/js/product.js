(function ($) {
  Drupal.behaviors.productImages = {
    attach: function (context, settings) {
      $('#main-image').html($('.field--product-image img').clone());

      $('.field--product-image img').click(function () {
        $('#main-image').html($(this).clone());
      });
    }
  };
})(jQuery);