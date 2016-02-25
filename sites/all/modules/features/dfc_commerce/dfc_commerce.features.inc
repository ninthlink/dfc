<?php
/**
 * @file
 * dfc_commerce.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function dfc_commerce_commerce_flat_rate_default_services() {
  $items = array(
    '101_200' => array(
      'name' => '101_200',
      'base' => '101_200',
      'display_title' => 'Flat rate for $101 - $200',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_101_200',
      'weight' => 1,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => '101_200_details_form',
        'details_form_validate' => '101_200_details_form_validate',
        'details_form_submit' => '101_200_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => '101-200',
      'base_rate' => array(
        'amount' => 1499,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    '1_100' => array(
      'name' => '1_100',
      'base' => '1_100',
      'display_title' => 'Flat rate for $1 - $100',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_1_100',
      'weight' => 2,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => '1_100_details_form',
        'details_form_validate' => '1_100_details_form_validate',
        'details_form_submit' => '1_100_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => '1-100',
      'base_rate' => array(
        'amount' => 899,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    '201_300' => array(
      'name' => '201_300',
      'base' => '201_300',
      'display_title' => 'Flat rate for $201 - $300',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_201_300',
      'weight' => 3,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => '201_300_details_form',
        'details_form_validate' => '201_300_details_form_validate',
        'details_form_submit' => '201_300_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => '201-300',
      'base_rate' => array(
        'amount' => 1999,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    '301_400' => array(
      'name' => '301_400',
      'base' => '301_400',
      'display_title' => 'Flat rate for $301 - $400',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_301_400',
      'weight' => 4,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => '301_400_details_form',
        'details_form_validate' => '301_400_details_form_validate',
        'details_form_submit' => '301_400_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => '301 - 400',
      'base_rate' => array(
        'amount' => 2499,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    '401_500' => array(
      'name' => '401_500',
      'base' => '401_500',
      'display_title' => 'Flat rate for $401 - $500',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_401_500',
      'weight' => 5,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => '401_500_details_form',
        'details_form_validate' => '401_500_details_form_validate',
        'details_form_submit' => '401_500_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => '401-500',
      'base_rate' => array(
        'amount' => 2999,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_rates().
 */
function dfc_commerce_commerce_tax_default_rates() {
  $items = array(
    'california_sales_tax' => array(
      'name' => 'california_sales_tax',
      'display_title' => 'California sales tax',
      'description' => '',
      'rate' => '.08',
      'type' => 'sales_tax',
      'rules_component' => 'commerce_tax_rate_california_sales_tax',
      'default_rules_component' => 1,
      'price_component' => 'tax|california_sales_tax',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'California sales tax',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function dfc_commerce_commerce_tax_default_types() {
  $items = array(
    'sales_tax' => array(
      'name' => 'sales_tax',
      'display_title' => 'Sales tax',
      'description' => 'A basic type for taxes that do not display inclusive with product prices.',
      'display_inclusive' => 0,
      'round_mode' => 0,
      'rule' => 'commerce_tax_type_sales_tax',
      'module' => 'commerce_tax_ui',
      'title' => 'Sales tax',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}
