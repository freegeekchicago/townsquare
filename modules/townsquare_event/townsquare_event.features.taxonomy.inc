<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function townsquare_event_taxonomy_default_vocabularies() {
  return array(
    'event_type' => array(
      'name' => 'Event type',
      'machine_name' => 'event_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          '0' => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            '0' => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            '0' => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
