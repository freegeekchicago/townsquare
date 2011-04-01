<?php
/**
 * @file
 * freegeek_volunteer_profile.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function freegeek_volunteer_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
