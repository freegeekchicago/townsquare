<?php
/**
 * @file
 * townsquare_event.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function townsquare_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events describe where and when something happened. Events can be used to create a calendar as well as track volunteer hours. Events do not support comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
