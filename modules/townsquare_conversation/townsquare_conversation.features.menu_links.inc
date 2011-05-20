<?php
/**
 * @file
 * townsquare_conversation.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function townsquare_conversation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-townsquare-secondary-tools:node/add/conversation
  $menu_links['menu-townsquare-secondary-tools:node/add/conversation'] = array(
    'menu_name' => 'menu-townsquare-secondary-tools',
    'link_path' => 'node/add/conversation',
    'router_path' => 'node/add',
    'link_title' => 'Start conversation',
    'options' => array(
      'attributes' => array(
        'title' => 'Start a new conversation',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-townsquare-toolbar:conversations
  $menu_links['menu-townsquare-toolbar:conversations'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'conversations',
    'router_path' => 'conversations',
    'link_title' => 'Conversations',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Conversations');
  t('Start conversation');


  return $menu_links;
}
