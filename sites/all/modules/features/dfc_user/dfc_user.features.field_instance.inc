<?php
/**
 * @file
 * dfc_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dfc_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'invite-invite_by_email-field_invitation_email_address'.
  $field_instances['invite-invite_by_email-field_invitation_email_address'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type e-mail address of person you wish invite.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_address',
    'label' => 'E-mail',
    'required' => FALSE,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'invite-invite_by_email-field_invitation_email_body'.
  $field_instances['invite-invite_by_email-field_invitation_email_body'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => array(
      0 => array(
        'value' => '[invite:inviter:name] has invited you to join [site:name] at [site:url].

To become a member of [site:name], click the link below or paste it into the address bar of your browser.

[invite:invite-accept-link]',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter e-mail body.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'invite-invite_by_email-field_invitation_email_subject'.
  $field_instances['invite-invite_by_email-field_invitation_email_subject'] = array(
    'bundle' => 'invite_by_email',
    'default_value' => array(
      0 => array(
        'value' => '[invite:inviter:name] has sent you an invite!',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter e-mail subject.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'invite',
    'field_name' => 'field_invitation_email_subject',
    'label' => 'Subject',
    'required' => FALSE,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_city_state'.
  $field_instances['user-user-field_city_state'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_city_state',
    'label' => 'City, State',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'user-user-field_club_id'.
  $field_instances['user-user-field_club_id'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_club_id',
    'label' => 'Club ID',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'user-user-field_first_name'.
  $field_instances['user-user-field_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_last_name'.
  $field_instances['user-user-field_last_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'user-user-field_send_special_offers'.
  $field_instances['user-user-field_send_special_offers'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '<a href="/privacy-policy">View Privacy Policy</a>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_send_special_offers',
    'label' => 'Send emails with DFC special promotions and/or offers',
    'required' => 1,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_share_email_with_sponsors'.
  $field_instances['user-user-field_share_email_with_sponsors'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_share_email_with_sponsors',
    'label' => 'Share my email with select DFC sponsors',
    'required' => 1,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_terms_conditions'.
  $field_instances['user-user-field_terms_conditions'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_terms_conditions',
    'label' => 'Terms',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a href="/privacy-policy">View Privacy Policy</a>');
  t('Body');
  t('City, State');
  t('Club ID');
  t('E-mail');
  t('Enter e-mail body.');
  t('Enter e-mail subject.');
  t('First Name');
  t('Last Name');
  t('Send emails with DFC special promotions and/or offers');
  t('Share my email with select DFC sponsors');
  t('Subject');
  t('Terms');
  t('Type e-mail address of person you wish invite.');

  return $field_instances;
}
