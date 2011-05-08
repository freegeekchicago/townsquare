<?php
/**
 * @file
 * townsquare_conversation.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function townsquare_conversation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function townsquare_conversation_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function townsquare_conversation_node_info() {
  $items = array(
    'conversation' => array(
      'name' => t('Conversation'),
      'base' => 'node_content',
      'description' => t('Conversations allow participants to ask questions, make proposals, and talk using threaded comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
