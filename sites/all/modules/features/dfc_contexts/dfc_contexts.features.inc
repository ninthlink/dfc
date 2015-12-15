<?php
/**
 * @file
 * dfc_contexts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfc_contexts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
