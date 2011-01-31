<?php

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
