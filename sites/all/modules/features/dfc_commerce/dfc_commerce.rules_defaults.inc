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
      "REQUIRES" : [ "commerce_rules_extra", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003E",
            "value" : "10000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
          }
        },
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003C=",
            "value" : "20000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
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
      "REQUIRES" : [ "commerce_rules_extra", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003C=",
            "value" : "10000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
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
      "REQUIRES" : [ "commerce_rules_extra", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003E",
            "value" : "20000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
          }
        },
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003C=",
            "value" : "30000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
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
      "REQUIRES" : [ "commerce_rules_extra", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003E",
            "value" : "30000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
          }
        },
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003C=",
            "value" : "40000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
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
      "REQUIRES" : [ "commerce_rules_extra", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "IF" : [
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003E",
            "value" : "40000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
          }
        },
        { "commerce_rules_extra_compare_product_amount" : {
            "order" : [ "commerce-order" ],
            "product_type" : { "value" : { "product" : "product" } },
            "exclude" : "0",
            "operator" : "\\u003C=",
            "value" : "50000",
            "term_id" : { "value" : [] },
            "product_display" : "0",
            "term_operator" : "IOO"
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
  $items['commerce_tax_rate_california_sales_tax'] = entity_import('rules_config', '{ "commerce_tax_rate_california_sales_tax" : {
      "LABEL" : "Calculate California sales tax",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "sales_tax" ],
      "REQUIRES" : [ "commerce_order", "rules", "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Line item" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "site:current-cart-order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "administrative_area",
            "value" : "CA"
          }
        },
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "entity_has_field" : {
            "entity" : [ "commerce-line-item:commerce-product" ],
            "field" : "field_tax_exempt"
          }
        },
        { "NOT data_is" : {
            "data" : [ "commerce-line-item:commerce-product:field-tax-exempt" ],
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "california_sales_tax"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  return $items;
}
