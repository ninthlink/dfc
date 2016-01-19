<?php
/**
 * @file
 * dfc_user.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dfc_user_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_page';
  $context->description = 'User profile page, not edit form';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-my_invitiations-block' => array(
          'module' => 'views',
          'delta' => 'my_invitiations-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'invite-invite_add_invite_by_email' => array(
          'module' => 'invite',
          'delta' => 'invite_add_invite_by_email',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'formblock-user_media' => array(
          'module' => 'formblock',
          'delta' => 'user_media',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'views-user_media-block_1' => array(
          'module' => 'views',
          'delta' => 'user_media-block_1',
          'region' => 'content_bottom',
          'weight' => '-7',
        ),
        'views-user_media-block_2' => array(
          'module' => 'views',
          'delta' => 'user_media-block_2',
          'region' => 'content_bottom',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User profile page, not edit form');
  $export['user_page'] = $context;

  return $export;
}
