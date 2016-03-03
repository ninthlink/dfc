<?php
/**
 * @file
 * dfc_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfc_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dfc_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_invite_type().
 */
function dfc_user_default_invite_type() {
  $items = array();
  $items['invite_by_email'] = entity_import('invite_type', '{
    "type" : "invite_by_email",
    "label" : "Invite by e-mail",
    "weight" : 0,
    "argument_keys" : [],
    "argument" : [],
    "invite_sending_controller" : { "invite_by_email" : "invite_by_email" },
    "description" : "Invitation by e-mail.",
    "data" : { "invite_by_email" : {
        "use_default" : true,
        "message_editable" : false,
        "replace_tokens" : false
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}
