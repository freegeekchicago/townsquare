<?php

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
