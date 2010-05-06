<?php 
/**
 * @file ax2.admin.inc
 *  Admin settings form for ax2 module.
 */

/**
 * Form builder. Configure ax2 settings.
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function ax2_admin_settings() {
 $form['ax2_api_key'] = array(
    '#title' => t('ax api key'),
    '#type' => 'textfield',
    '#default_value' => variable_get('ax2_api_key', NULL),
    '#description' => t('This API key must match the key stored in ax1.'),
  ); 
 $form['ax2_ax1_url'] = array(
    '#title' => t('aegir url'),
    '#type' => 'textfield',
    '#default_value' => variable_get('ax2_api_key', NULL),
    '#description' => t('e.g. http://aegir.example.com/xmlrpc.php'),
  ); 

  return system_settings_form($form);
}
