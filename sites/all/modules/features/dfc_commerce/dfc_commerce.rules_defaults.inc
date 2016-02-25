<?php
/**
 * @file
 * dfc_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dfc_commerce_default_rules_configuration() {
  $items = array();
  $items['commerce_shipping_service_101_200'] = entity_import('rules_config', '{ "commerce_shipping_service_101_200" : {
      "LABEL" : "Rate 101-200",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_price", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003E",
            "second_price" : { "value" : { "amount" : 10000, "currency_code" : "USD" } }
          }
        },
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003C=",
            "second_price" : { "value" : { "amount" : 20000, "currency_code" : "USD" } }
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "101_200",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_1_100'] = entity_import('rules_config', '{ "commerce_shipping_service_1_100" : {
      "LABEL" : "Rate 1-100",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_price", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003C=",
            "second_price" : { "value" : { "amount" : 10000, "currency_code" : "USD" } }
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "1_100",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_201_300'] = entity_import('rules_config', '{ "commerce_shipping_service_201_300" : {
      "LABEL" : "Rate 201-300",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_price", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003E",
            "second_price" : { "value" : { "amount" : 20000, "currency_code" : "USD" } }
          }
        },
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003C=",
            "second_price" : { "value" : { "amount" : 30000, "currency_code" : "USD" } }
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "201_300",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_301_400'] = entity_import('rules_config', '{ "commerce_shipping_service_301_400" : {
      "LABEL" : "Rate 301 - 400",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_price", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003E",
            "second_price" : { "value" : { "amount" : 30000, "currency_code" : "USD" } }
          }
        },
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003C=",
            "second_price" : { "value" : { "amount" : 40000, "currency_code" : "USD" } }
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "301_400",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_401_500'] = entity_import('rules_config', '{ "commerce_shipping_service_401_500" : {
      "LABEL" : "Rate 401-500",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_price", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003E",
            "second_price" : { "value" : { "amount" : 40000, "currency_code" : "USD" } }
          }
        },
        { "commerce_price_compare_price" : {
            "first_price" : [ "commerce-order:commerce-order-total" ],
            "operator" : "\\u003C=",
            "second_price" : { "value" : { "amount" : 50000, "currency_code" : "USD" } }
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "401_500",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  return $items;
}
