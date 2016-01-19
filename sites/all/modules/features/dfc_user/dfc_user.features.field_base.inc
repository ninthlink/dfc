<?php
/**
 * @file
 * dfc_user.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dfc_user_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ugc_moderation'.
  $field_bases['field_ugc_moderation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ugc_moderation',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Pending Approval',
        1 => 'Approved',
        2 => 'Denied',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
