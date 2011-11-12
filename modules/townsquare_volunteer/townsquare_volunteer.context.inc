<?php
/**
 * @file
 * townsquare_volunteer.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function townsquare_volunteer_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event';
  $context->description = 'Townsquare event context';
  $context->tag = 'townsquare';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
        'event/*' => 'event/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'townsquare_full_width',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Townsquare event context');
  t('townsquare');
  $export['event'] = $context;

  return $export;
}
