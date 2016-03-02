<?php
/**
 * @file
 * dfc_commerce.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dfc_commerce_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_tax_exempt'.
  $field_bases['field_tax_exempt'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tax_exempt',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
