<?php
/**
 * @file
 * This file contains the administration configuration form and related functions.
*/

/**
 * Form constructor for the Administration Settings form.
 *
 * @ingroup forms
*/
function superspotify_admin($form, &$form_state) {
  $form = array();

  $form['superspotify_clientid'] = array(
    '#type' => 'textfield',
    '#title' => t('Spotify API Client ID'),
    '#default_value' => variable_get('superspotify_clientid', '9a2c0cab21da438f94c38ce93d074684'),
    '#size' => 40,
    '#maxlength' => 40,
    '#description' => t("Your Spotify App Client ID. Sign up at: https://developer.spotify.com"),
    '#required' => TRUE,
  );

  $form['superspotify_clientsecret'] = array(
    '#type' => 'textfield',
    '#title' => t('Spotify API Client Secret'),
    '#default_value' => variable_get('superspotify_clientsecret', 'c75fb7a5f2ae40c1ac9485cde7be16c7'),
    '#size' => 40,
    '#maxlength' => 40,
    '#description' => t("Your Spotify App Secret Key. Sign up at: https://developer.spotify.com"),
    '#required' => TRUE,
  );
  
  $form['superspotify_redirecturi'] = array(
    '#type' => 'textfield',
    '#title' => t('Spotify API Redirect URI'),
    '#default_value' => variable_get('superspotify_redirecturi', 'http://plencnerlabs.com/superspotify/albums'),
    '#size' => 50,
    '#maxlength' => 50,
    '#description' => t("Your Spotify App Redirect URI. Sign up at: https://developer.spotify.com"),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}