<?php
/**
 * @file
 * townsquare_volunteer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function townsquare_volunteer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function townsquare_volunteer_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function townsquare_volunteer_node_info() {
  $items = array(
    'volunteer_session' => array(
      'name' => t('Volunteer session'),
      'base' => 'node_content',
      'description' => t('Volunteer sessions describe any time a volunteer participates at an event and logs their hours.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
