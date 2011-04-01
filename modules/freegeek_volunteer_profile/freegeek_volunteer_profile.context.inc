<?php
/**
 * @file
 * freegeek_volunteer_profile.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function freegeek_volunteer_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'freegeek_volunteer_profile';
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
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Townsquare user');
  t('townsquare');
  $export['freegeek_volunteer_profile'] = $context;

  return $export;
}
