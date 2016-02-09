<?php
/**
 * @file
 * dfc_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dfc_user_default_rules_configuration() {
  $items = array();
  $items['commerce_cart_redirect_to_checkout_on_add_to_cart'] = entity_import('rules_config', '{ "commerce_cart_redirect_to_checkout_on_add_to_cart" : {
      "LABEL" : "Redirect to Checkout on Add to Cart",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Cart" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [ { "redirect" : { "url" : "cart" } } ]
    }
  }');
  return $items;
}
