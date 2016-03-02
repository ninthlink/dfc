<?php
/**
 * @file
 * dfc_commerce.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dfc_commerce_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'commerce_product-membership_entity_product-field_tax_exempt'.
  $field_instances['commerce_product-membership_entity_product-field_tax_exempt'] = array(
    'bundle' => 'membership_entity_product',
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Tax Exempt',
    ),
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Leave this checked for products that will not be shipped, and therefore are not taxed, such as memberships.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'membership_entity_commerce' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tax_exempt',
    'label' => 'Tax Exempt',
    'required' => 1,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'commerce_product-product-field_tax_exempt'.
  $field_instances['commerce_product-product-field_tax_exempt'] = array(
    'bundle' => 'product',
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Tax Exempt',
    ),
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Only check this for products that will not be shipped and therefore should not be taxed, such as memberships.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'membership_entity_commerce' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tax_exempt',
    'label' => 'Tax Exempt',
    'required' => 1,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 46,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Leave this checked for products that will not be shipped, and therefore are not taxed, such as memberships.');
  t('Only check this for products that will not be shipped and therefore should not be taxed, such as memberships.');
  t('Tax Exempt');

  return $field_instances;
}
