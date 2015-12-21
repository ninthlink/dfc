<?php
/**
 * @file
 * dfc_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dfc_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|event|default';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '2',
    'children' => array(
      0 => 'field_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-location field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_location|node|event|default'] = $field_group;

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
  $export['group_media_content_teaser|node|media_item|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_content|node|media_item|default';
  $field_group->group_name = 'group_media_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Content',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
      1 => 'field_product_description',
      2 => 'field_media_category',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Media Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-media-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_media_content|node|media_item|default'] = $field_group;

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
      0 => 'field_media_link',
      1 => 'field_image',
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
  $export['group_media_header_teaser|node|media_item|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_header|node|media_item|default';
  $field_group->group_name = 'group_media_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_media_link',
      1 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Media Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-media-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_media_header|node|media_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|media_item|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_media_link',
      1 => 'field_media_type',
      2 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-media field-group-fieldset',
        'description' => 'Upload a video OR an image, but not both.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_media|node|media_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_videos|node|media_item|default';
  $field_group->group_name = 'group_related_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Videos',
    'weight' => '4',
    'children' => array(
      0 => 'field_related_media',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related Videos',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-related-videos field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_videos|node|media_item|default'] = $field_group;

  return $export;
}
