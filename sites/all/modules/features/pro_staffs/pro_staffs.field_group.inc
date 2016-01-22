<?php
/**
 * @file
 * pro_staffs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pro_staffs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottomctas|node|staff|teaser';
  $field_group->group_name = 'group_bottomctas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_staff_last';
  $field_group->data = array(
    'label' => 'Bottom Ctas',
    'weight' => '23',
    'children' => array(
      0 => 'field_link',
      1 => 'group_rates',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bottom Ctas',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-bottomctas field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_bottomctas|node|staff|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rates|node|staff|teaser';
  $field_group->group_name = 'group_rates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_bottomctas';
  $field_group->data = array(
    'label' => 'VIEW RATES',
    'weight' => '19',
    'children' => array(
      0 => 'field_half_day_rate',
      1 => 'field_full_day_rate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'VIEW RATES',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'collapsed',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_rates|node|staff|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_first|node|staff|teaser';
  $field_group->group_name = 'group_staff_first';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff First',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Staff First',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-resort-first group-staff-first field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_staff_first|node|staff|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_last|node|staff|teaser';
  $field_group->group_name = 'group_staff_last';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff Last',
    'weight' => '2',
    'children' => array(
      0 => 'field_staff_category',
      1 => 'field_businessname',
      2 => 'field_location',
      3 => 'field_phone_number',
      4 => 'field_website_link',
      5 => 'field_product_description',
      6 => 'title_field',
      7 => 'sharethis',
      8 => 'group_bottomctas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Staff Last',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-resort-last group-staff-last field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_staff_last|node|staff|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bottom Ctas');
  t('Staff First');
  t('Staff Last');
  t('VIEW RATES');

  return $field_groups;
}
