<?php
/**
 * @file
 * townsquare_volunteer.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function townsquare_volunteer_taxonomy_default_vocabularies() {
  return array(
    'volunteer_role' => array(
      'name' => 'Volunteer role',
      'machine_name' => 'volunteer_role',
      'description' => 'A role for a volunteer during a volunteer session',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
