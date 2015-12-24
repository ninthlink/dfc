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
      )
    ),
  );
}
 
/**
 * Implements hook_views_data().
 */
function dfc_points_views_views_data() {
  $data = array();/*
  $data['userpoints'] = array(
    // First give some general information about the table as a data source.
    'table' => array(
      // The grouping for this field/filter/sort in the Views UI.
      'group' => t('Userpoints Example Views Stuff'),
      'table' => 'userpoints',
      'base' => array(
        'table' => 'userpoints',
        'field' => 'pid', // This is the identifier field for the view.
        'title' => t('Example Views API Data'),
        'help' => t('Names provided by the Mymodule module.'),
        'extra' => array(array('field' => 'tid', 'value' => '0', 'operator' => '=')),
      ),
      'join' => array(
        'user' => array(
          'handler' => 'views_join', // this is actually optional
          'left_table' => 'user', // Because this is a direct link it could be left out.
          'left_field' => 'uid',
          'field' => 'uid',
   //         'table' => 'userpoints',
          'extra' => array(array('field' => 'tid', 'value' => '0', 'operator' => '=')),
      // also supported:
      // 'type' => 'INNER',
      // 'extra' => array(array('field' => 'fieldname', 'value' => 'value', 'operator' => '='))
      //   Unfortunately, you can't specify other tables here, but you can construct
      //   alternative joins in the handlers that can do that.
      // 'table' => 'the actual name of this table in the database', - See more at: http://www.grasmash.com/article/demystifying-views-api-developers-guide-integrating-views#sthash.5vfJ0sqX.dpuf
        )
      ),
        ),
    // Now we describe each field that Views needs to know about, starting 
    // with the identifier field.
    'pid' => array(
      'title' => t('Points ID'),
      'help' => t("The unique Points ID."),
      'field' => array(
       //'handler' => 'dfc_lifetime_points', 
'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
    ),
    'lifetime_points' => array(
      'title' => t('Points'),
      'help' => t("The user's current points"),
      'real field' => 'points',
      'field' => array(
//'handler' => 'dfc_lifetime_points',         
'handler' => 'views_handler_field_numeric',
//        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
    ),
  
);
  return $data;
}
 /* 
  
  
  
  
  
  
  
  $data['userpoints']['table']['join'] = array(
    // this explains how the 'node' table (named in the line above)
    // links toward the node_revision table.
    'node_revision' => array(
      'handler' => 'views_join', // this is actually optional
      'left_table' => 'node_revision', // Because this is a direct link it could be left out.
      'left_field' => 'nid',
      'field' => 'nid',
      // also supported:
      // 'type' => 'INNER',
      // 'extra' => array(array('field' => 'fieldname', 'value' => 'value', 'operator' => '='))
      //   Unfortunately, you can't specify other tables here, but you can construct
      //   alternative joins in the handlers that can do that.
      // 'table' => 'the actual name of this table in the database',
     ),
  ); - See more at: http://www.grasmash.com/article/demystifying-views-api-developers-guide-integrating-views#sthash.5vfJ0sqX.dpuf
      
  $data['userpoints'] = array(
    // First give some general information about the table as a data source.
    'table' => array(
      // The grouping for this field/filter/sort in the Views UI.
      'group' => t('DFC Userpoints'),
      'base' => array(
        'field' => 'points', // This is the identifier field for the view.
        'title' => t('Example Views API Data'),
        'help' => t('Names provided by the Mymodule module.'),
      ),
    ),
    // Now we describe each field that Views needs to know about, starting 
    // with the identifier field.
    'points' => array(
      'title' => t('Lifetime Points'),
      'help' => t("The unique Name ID."),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
    ),
    // Now the name field.
    /*'name' => array(
      'title' => t('Name'),
      'help' => t("The Name."),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),
  );
  return $data;
}








*/
  // Add Example group
  $data['dfc_points_views']['table']['group'] = t('DFC Points');
  $data['dfc_points_views']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );
  // Add custom field
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
  return $data;
}