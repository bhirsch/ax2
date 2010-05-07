<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ax2_content_default_fields() {
  module_load_include('inc', 'ax2', 'ax2.defaults');
  $args = func_get_args();
  return call_user_func_array('_ax2_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ax2_ctools_plugin_api() {
  module_load_include('inc', 'ax2', 'ax2.defaults');
  $args = func_get_args();
  return call_user_func_array('_ax2_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function ax2_node_info() {
  module_load_include('inc', 'ax2', 'ax2.features.node');
  $args = func_get_args();
  return call_user_func_array('_ax2_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function ax2_strongarm() {
  module_load_include('inc', 'ax2', 'ax2.defaults');
  $args = func_get_args();
  return call_user_func_array('_ax2_strongarm', $args);
}
