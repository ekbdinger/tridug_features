<?php
/**
 * @file
 * tridug_blog.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tridug_blog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tridug_blog_node_info() {
  $items = array(
    'tridug_blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('This is a content type for blog posts'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
