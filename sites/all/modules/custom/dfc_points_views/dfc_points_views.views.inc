<?php
/**
 * @file
 * Views definitions for 'dfc_points_views'
 */
 
/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function dfc_points_views_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'dfc_points_views'),
    ),
    'handlers' => array(
      // The name of my handler
      'dfc_monthly_points' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field_numeric',
      ),
      'dfc_monthly_points_sort' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_sort',
      ),
      'dfc_lifetime_points' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field_numeric',
      ),
      'dfc_lifetime_points_sort' => array(
        'parent' => 'views_handler_sort'
      ),
      'dfc_monthly_user_standing' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field_numeric',
      ),
      'dfc_lifetime_user_standing' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field_numeric',
      ),
      'dfc_max_lifetime_user_standing' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field_numeric',
      ),
      'dfc_max_monthly_user_standing' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field_numeric',
      ),
    ),
  );
}
 
/**
 * Implements hook_views_data().
 */
function dfc_points_views_views_data() {
  $data = array();
  
  $data['dfc_points_views']['table']['group'] = t('DFC Points');
  $data['dfc_points_views']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );
  // Add custom fields
  $data['dfc_points_views']['lifetime_points'] = array(
    'title' => t('Lifetime Points'),
    'help' => t('User\'s lifetime points'),
    'field' => array(
      'handler' => 'dfc_lifetime_points',
    ),
    'sort' => array(
      'handler' => 'dfc_lifetime_points_sort',
    ),
  );
  $data['dfc_points_views']['monthly_points'] = array(
    'title' => t('Monthly Points'),
    'help' => t('User\'s monthly points'),
    'field' => array(
      'handler' => 'dfc_monthly_points',
    ),
    'sort' => array(
      'handler' => 'dfc_monthly_points_sort',
    ),
  );
  $data['dfc_points_views']['monthly_user_standing'] = array(
    'title' => t('Monthly User Standing'),
    'help' => t('User\'s monthly standing'),
    'field' => array(
      'handler' => 'dfc_monthly_user_standing',
    ),
  );
  $data['dfc_points_views']['lifetime_user_standing'] = array(
    'title' => t('Lifetime User Standing'),
    'help' => t('User\'s lifetime standing'),
    'field' => array(
      'handler' => 'dfc_lifetime_user_standing',
    ),
  );
  $data['dfc_points_views']['lifetime_max_user_standing'] = array(
    'title' => t('Max Lifetime User Standing'),
    'help' => t('Standing for users with no lifetime points'),
    'field' => array(
      'handler' => 'dfc_max_lifetime_user_standing',
    ),
  );
  $data['dfc_points_views']['monthly_max_user_standing'] = array(
    'title' => t('Max Monthly User Standing'),
    'help' => t('Standing for users with no monthly points'),
    'field' => array(
      'handler' => 'dfc_max_monthly_user_standing',
    ),
  );
  return $data;
}