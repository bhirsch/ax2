<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _ax2_node_info() {
  $items = array(
    'website' => array(
      'name' => t('Website'),
      'module' => 'features',
      'description' => t('Create a website.'),
      'has_title' => '1',
      'title_label' => t('Domain'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
