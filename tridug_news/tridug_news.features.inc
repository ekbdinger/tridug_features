<?php
/**
 * @file
 * tridug_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tridug_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tridug_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('New Updates on the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
