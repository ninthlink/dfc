<?php
/**
 * @file
 * pro_staffs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_staffs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pro_staffs';
  $context->description = 'Staffs';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pro-staff' => 'pro-staff',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-pro-staff-top-block' => array(
          'module' => 'bean',
          'delta' => 'pro-staff-top-block',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-staff-pro-intro' => array(
          'module' => 'bean',
          'delta' => 'staff-pro-intro',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'views-banner_ads-block' => array(
          'module' => 'views',
          'delta' => 'banner_ads-block',
          'region' => 'content_bottom',
          'weight' => '-44',
        ),
        'views-staffs-block' => array(
          'module' => 'views',
          'delta' => 'staffs-block',
          'region' => 'content_bottom',
          'weight' => '-43',
        ),
        'views-offers-block_1' => array(
          'module' => 'views',
          'delta' => 'offers-block_1',
          'region' => 'footer_top',
          'weight' => '-44',
        ),
        'views-partners-block' => array(
          'module' => 'views',
          'delta' => 'partners-block',
          'region' => 'footer_top',
          'weight' => '-43',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Staffs');
  t('page');
  $export['pro_staffs'] = $context;

  return $export;
}
