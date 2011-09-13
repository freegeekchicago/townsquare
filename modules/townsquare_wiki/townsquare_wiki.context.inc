<?php
/**
 * @file
 * townsquare_wiki.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function townsquare_wiki_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wiki';
  $context->description = 'Townsquare wiki';
  $context->tag = 'townsquare';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-townsquare_node_revisions-block' => array(
          'module' => 'views',
          'delta' => 'townsquare_node_revisions-block',
          'region' => 'page_actions',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Townsquare wiki');
  t('townsquare');
  $export['wiki'] = $context;

  return $export;
}
