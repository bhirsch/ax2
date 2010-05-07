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
 $key = variable_get('ax2_api_key', FALSE);
 $form['ax2_api_key'] = array(
    '#title' => t('ax api key'),
    '#type' => 'textfield',
    '#default_value' => ($key) ? $key : NULL,
    '#description' => t('This API key must match the key stored in ax1.'),
  ); 
  $url = variable_get('ax2_ax1_url', FALSE); 
  $form['ax2_ax1_url'] = array(
    '#title' => t('path to aegir xmlrpc.php'),
    '#type' => 'textfield',
    '#default_value' => ($url) ? $url : NULL,
    '#description' => t('e.g. http://aegir.example.com/xmlrpc.php'),
  ); 

  // Select Aegir user to be designated as "client" 
  $client['ax2_client'] = array(
    '#title' => t('client'), 
    '#type' => 'textfield',
    '#default_value' => variable_get('ax2_client', user_load(1)->mail),
    '#description' => t('Leave this blank to make end-user '
                       .'user #1. Note: Be careful. This may '
                       .'not be advisable for a shared hosting '
                       .'environment.'),
    // TODO If blank use user's email for client.
  );
  // Select which platform and profile users can sign up for.
  // @todo Enable administrator to set up different on-click-installs for different content types
  // @todo Or enable end-user to select from different install profiles
  $method_name = 'ax1.platforms'; 
  $platforms = xmlrpc($url, $method_name, $key);
  $form['ax2_platform'] = array(
    '#title' => t('platform'), 
    '#type' => 'select',
    '#options' => $platforms,
    '#default_value' => variable_get('ax2_platform', NULL),
    // disable if $url for Aegir isn't set
    '#disabled' => (!$url) ? TRUE : FALSE,
    // explain $url must be set before this can be enabled
    '#description' => (!$url) ? t("you must save the path to aegir's xmlrpc.php file before you can select an available platform") : t('aegir platform'),
  );
  $method_name = 'ax1.profiles'; 
  $profiles = xmlrpc($url, $method_name, $key);
  $form['ax2_profile'] = array(
    '#title' => t('profile'), 
    '#type' => 'select',
    '#options' => $profiles,
    '#default_value' => variable_get('ax2_profile', NULL),
    // disable if $url for Aegir isn't set
    '#disabled' => (!$url) ? TRUE : FALSE,
    // explain $url must be set before this can be enabled
    '#description' => (!$url) ? t("you must save the path to aegir's xmlrpc.php file before you can select an available profile") : t('install profile'),
  );

  return system_settings_form($form);
}
