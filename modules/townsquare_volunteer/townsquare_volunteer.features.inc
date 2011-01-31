<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function townsquare_volunteer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_node_info().
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

/**
 * Implementation of hook_views_api().
 */
function townsquare_volunteer_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
