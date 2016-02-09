<?php
/**
 * @file
 * dfc_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dfc_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_invitiations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'invite';
  $view->human_name = 'My Invitiations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Referral Program';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'joined' => 'joined',
    'counter' => 'counter',
    'field_invitation_email_address' => 'counter',
    'status' => 'status',
    'invite_resend_link' => 'invite_resend_link',
    'invite_withdraw_link' => 'invite_resend_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'joined' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '. ',
      'empty_column' => 0,
    ),
    'field_invitation_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'invite_resend_link' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'invite_withdraw_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Invite up to 10 friends or family to become members and when they do you earn <strong>500 points</strong>.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Invite: Joined */
  $handler->display->display_options['fields']['joined']['id'] = 'joined';
  $handler->display->display_options['fields']['joined']['table'] = 'invite';
  $handler->display->display_options['fields']['joined']['field'] = 'joined';
  $handler->display->display_options['fields']['joined']['label'] = '';
  $handler->display->display_options['fields']['joined']['exclude'] = TRUE;
  $handler->display->display_options['fields']['joined']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['joined']['date_format'] = 'long';
  $handler->display->display_options['fields']['joined']['second_date_format'] = 'long';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'E-mail';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Invite: E-mail */
  $handler->display->display_options['fields']['field_invitation_email_address']['id'] = 'field_invitation_email_address';
  $handler->display->display_options['fields']['field_invitation_email_address']['table'] = 'field_data_field_invitation_email_address';
  $handler->display->display_options['fields']['field_invitation_email_address']['field'] = 'field_invitation_email_address';
  $handler->display->display_options['fields']['field_invitation_email_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_invitation_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_invitation_email_address']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_invitation_email_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_invitation_email_address']['type'] = 'text_plain';
  /* Field: Invite: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'views_entity_invite';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Invite Status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['link_to_entity'] = 0;
  /* Field: Invite: Invite action link: resend */
  $handler->display->display_options['fields']['invite_resend_link']['id'] = 'invite_resend_link';
  $handler->display->display_options['fields']['invite_resend_link']['table'] = 'views_entity_invite';
  $handler->display->display_options['fields']['invite_resend_link']['field'] = 'invite_resend_link';
  $handler->display->display_options['fields']['invite_resend_link']['label'] = '';
  $handler->display->display_options['fields']['invite_resend_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['invite_resend_link']['alter']['text'] = 'resend';
  $handler->display->display_options['fields']['invite_resend_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['invite_resend_link']['link_to_entity'] = 0;
  /* Field: Invite: Invite action link: withdrawn */
  $handler->display->display_options['fields']['invite_withdraw_link']['id'] = 'invite_withdraw_link';
  $handler->display->display_options['fields']['invite_withdraw_link']['table'] = 'views_entity_invite';
  $handler->display->display_options['fields']['invite_withdraw_link']['field'] = 'invite_withdraw_link';
  $handler->display->display_options['fields']['invite_withdraw_link']['label'] = '';
  $handler->display->display_options['fields']['invite_withdraw_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['invite_withdraw_link']['alter']['text'] = 'withdraw';
  $handler->display->display_options['fields']['invite_withdraw_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['invite_withdraw_link']['link_to_entity'] = 0;
  /* Contextual filter: Invite: Inviter uid */
  $handler->display->display_options['arguments']['inviter']['id'] = 'inviter';
  $handler->display->display_options['arguments']['inviter']['table'] = 'invite';
  $handler->display->display_options['arguments']['inviter']['field'] = 'inviter';
  $handler->display->display_options['arguments']['inviter']['default_action'] = 'default';
  $handler->display->display_options['arguments']['inviter']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['inviter']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['inviter']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['inviter']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['inviter']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['my_invitiations'] = $view;

  $view = new view();
  $view->name = 'user_media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Moderation Status */
  $handler->display->display_options['fields']['field_ugc_moderation']['id'] = 'field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['table'] = 'field_data_field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['field'] = 'field_ugc_moderation';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_media' => 'user_media',
  );
  /* Filter criterion: Content: Media Type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_tid']['id'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['field'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_type_tid']['vocabulary'] = 'media_type';

  /* Display: Images Block */
  $handler = $view->new_display('block', 'Images Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photo Upload History';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Uploaded on';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F d Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Moderation Status */
  $handler->display->display_options['fields']['field_ugc_moderation']['id'] = 'field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['table'] = 'field_data_field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['field'] = 'field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['label'] = 'Status';
  $handler->display->display_options['fields']['field_ugc_moderation']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_media' => 'user_media',
  );
  /* Filter criterion: Content: Media Type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_tid']['id'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['field'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_media_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_type_tid']['vocabulary'] = 'media_type';

  /* Display: Videos Block */
  $handler = $view->new_display('block', 'Videos Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Video Upload History';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_media_link']['id'] = 'field_media_link';
  $handler->display->display_options['fields']['field_media_link']['table'] = 'field_data_field_media_link';
  $handler->display->display_options['fields']['field_media_link']['field'] = 'field_media_link';
  $handler->display->display_options['fields']['field_media_link']['label'] = '';
  $handler->display->display_options['fields']['field_media_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_media_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_media_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_media_link']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_link']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_link']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_link']['field_api_classes'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Uploaded on';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F d Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Moderation Status */
  $handler->display->display_options['fields']['field_ugc_moderation']['id'] = 'field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['table'] = 'field_data_field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['field'] = 'field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['label'] = 'Status';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_media' => 'user_media',
  );
  /* Filter criterion: Content: Media Type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_tid']['id'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['field'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_media_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_type_tid']['vocabulary'] = 'media_type';

  /* Display: Admin Moderation */
  $handler = $view->new_display('block', 'Admin Moderation', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ugc_moderation' => 'field_ugc_moderation',
    'field_image' => 'field_image',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ugc_moderation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::dfc_user_ugc_approve' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Approve item',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::dfc_user_ugc_dent' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Deny item approval',
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['label'] = '';
  $handler->display->display_options['fields']['field_media_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Moderation Status */
  $handler->display->display_options['fields']['field_ugc_moderation']['id'] = 'field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['table'] = 'field_data_field_ugc_moderation';
  $handler->display->display_options['fields']['field_ugc_moderation']['field'] = 'field_ugc_moderation';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_media' => 'user_media',
  );
  /* Filter criterion: Content: Moderation Status (field_ugc_moderation) */
  $handler->display->display_options['filters']['field_ugc_moderation_value']['id'] = 'field_ugc_moderation_value';
  $handler->display->display_options['filters']['field_ugc_moderation_value']['table'] = 'field_data_field_ugc_moderation';
  $handler->display->display_options['filters']['field_ugc_moderation_value']['field'] = 'field_ugc_moderation_value';
  $handler->display->display_options['filters']['field_ugc_moderation_value']['value'] = array(
    0 => '0',
  );
  $export['user_media'] = $view;

  return $export;
}
