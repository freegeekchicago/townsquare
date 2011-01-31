<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function townsquare_conversation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-townsquare-toolbar:node/add/conversation
  $menu_links['menu-townsquare-toolbar:node/add/conversation'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'node/add/conversation',
    'router_path' => 'node/add/conversation',
    'link_title' => 'Start conversation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Start conversation');


  return $menu_links;
}
