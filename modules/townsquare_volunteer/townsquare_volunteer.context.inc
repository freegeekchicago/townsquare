<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function townsquare_volunteer_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user';
  $context->description = 'Townsquare user';
  $context->tag = 'townsquare';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'current',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-00af09155a0404cd3c32eaa5b5b00ea3' => array(
          'module' => 'views',
          'delta' => '00af09155a0404cd3c32eaa5b5b00ea3',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Townsquare user');
  t('townsquare');
  $export['user'] = $context;

  return $export;
}
