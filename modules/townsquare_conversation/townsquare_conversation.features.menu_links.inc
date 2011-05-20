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


  return $menu_links;
}
