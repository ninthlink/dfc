<?php
/**
 * @file
 * dfc_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dfc_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_content_teaser|node|media_item|teaser';
  $field_group->group_name = 'group_media_content_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_item';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Content',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'field_media_category',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Media Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-media-content-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_media_content_teaser|node|media_item|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_header_teaser|node|media_item|teaser';
  $field_group->group_name = 'group_media_header_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_item';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_media_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Media Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-media-header-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_media_header_teaser|node|media_item|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resort_first|node|resort|teaser';
  $field_group->group_name = 'group_resort_first';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resort';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resort First',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resort First',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-resort-first field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resort_first|node|resort|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resort_last|node|resort|teaser';
  $field_group->group_name = 'group_resort_last';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resort';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resort Last',
    'weight' => '2',
    'children' => array(
      0 => 'field_link',
      1 => 'field_location',
      2 => 'field_phone_number',
      3 => 'field_product_description',
      4 => 'field_resort_category',
      5 => 'field_website_link',
      6 => 'title_field',
      7 => 'sharethis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resort Last',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-resort-last field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resort_last|node|resort|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media Content');
  t('Media Header');
  t('Resort First');
  t('Resort Last');

  return $field_groups;
}
