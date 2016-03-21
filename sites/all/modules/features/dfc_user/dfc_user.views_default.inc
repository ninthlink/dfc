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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Earn <strong>10 points</strong> for every friend or family member you invite to become a member of DFC and when they join - you earn an additional <strong>50 points</strong>.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h4>No Invites found.</h4>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
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
  $handler->display->display_options['fields']['status_1']['id'] = 'status_1';
  $handler->display->display_options['fields']['status_1']['table'] = 'invite';
  $handler->display->display_options['fields']['status_1']['field'] = 'status';
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
  $handler->display->display_options['fields']['invite_withdraw_link']['alter']['text'] = 'remove';
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
  /* Filter criterion: Invite: Joined */
  $handler->display->display_options['filters']['joined']['id'] = 'joined';
  $handler->display->display_options['filters']['joined']['table'] = 'invite';
  $handler->display->display_options['filters']['joined']['field'] = 'joined';
  $handler->display->display_options['filters']['joined']['operator'] = '<';
  $handler->display->display_options['filters']['joined']['value']['value'] = '1970-01-01';
  /* Filter criterion: Invite: Expiry */
  $handler->display->display_options['filters']['expiry']['id'] = 'expiry';
  $handler->display->display_options['filters']['expiry']['table'] = 'invite';
  $handler->display->display_options['filters']['expiry']['field'] = 'expiry';
  $handler->display->display_options['filters']['expiry']['operator'] = '>=';
  $handler->display->display_options['filters']['expiry']['value']['value'] = '0 sec';
  $handler->display->display_options['filters']['expiry']['value']['type'] = 'offset';
  /* Filter criterion: Invite: Canceled */
  $handler->display->display_options['filters']['canceled']['id'] = 'canceled';
  $handler->display->display_options['filters']['canceled']['table'] = 'invite';
  $handler->display->display_options['filters']['canceled']['field'] = 'canceled';
  $handler->display->display_options['filters']['canceled']['value']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['my_invitiations'] = $view;

  $view = new view();
  $view->name = 'points_check';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'userpoints_txn';
  $view->human_name = 'Points Check';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Points Check';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view userpoints';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'points' => 'points',
    'uid' => 'uid',
    'name' => 'name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'mail' => 'mail',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'points';
  $handler->display->display_options['style_options']['info'] = array(
    'points' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Userpoints Transactions: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'userpoints_txn';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: SUM(Userpoints Transactions: Points) */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_txn';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['group_type'] = 'sum';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_first_name']['field_api_classes'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_last_name']['field_api_classes'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Points Details';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'view details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]/points';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  /* Filter criterion: Userpoints Transactions: Timestamp */
  $handler->display->display_options['filters']['time_stamp']['id'] = 'time_stamp';
  $handler->display->display_options['filters']['time_stamp']['table'] = 'userpoints_txn';
  $handler->display->display_options['filters']['time_stamp']['field'] = 'time_stamp';
  $handler->display->display_options['filters']['time_stamp']['operator'] = 'between';
  $handler->display->display_options['filters']['time_stamp']['value']['min'] = '2016-03-01 00:00:00';
  $handler->display->display_options['filters']['time_stamp']['value']['max'] = '2016-03-18 23:59:59';
  $handler->display->display_options['filters']['time_stamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['time_stamp']['expose']['operator_id'] = 'time_stamp_op';
  $handler->display->display_options['filters']['time_stamp']['expose']['label'] = 'Time';
  $handler->display->display_options['filters']['time_stamp']['expose']['operator'] = 'time_stamp_op';
  $handler->display->display_options['filters']['time_stamp']['expose']['identifier'] = 'time_stamp';
  $handler->display->display_options['filters']['time_stamp']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Userpoints Transactions: Category */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'userpoints_txn';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/people/points';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'User Points Check';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['points_check'] = $view;

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
