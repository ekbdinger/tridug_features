<?php
/**
 * @file
 * tridug_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tridug_news_taxonomy_default_vocabularies() {
  return array(
    'news_categories' => array(
      'name' => 'News Categories',
      'machine_name' => 'news_categories',
      'description' => 'Used with the News content type',
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
