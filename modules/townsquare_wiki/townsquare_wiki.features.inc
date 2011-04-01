<?php
/**
 * @file
 * townsquare_wiki.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function townsquare_wiki_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_node_info().
 */
function townsquare_wiki_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Wiki page'),
      'base' => 'node_content',
      'description' => t('An editable page. Wiki pages maintain a history of their changes, and support role-based access.  Wiki pages do not support comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
