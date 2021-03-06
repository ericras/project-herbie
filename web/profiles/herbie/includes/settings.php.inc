<?php

$environment = getenv('UNLCMSENV');

if ($environment == 'production') {
  $config['config_split.config_split.production']['status'] = TRUE;
  $config['config_split.config_split.stage']['status'] = FALSE;
  $config['config_split.config_split.development']['status'] = FALSE;
}
elseif ($environment == 'stage') {
  $config['config_split.config_split.production']['status'] = FALSE;
  $config['config_split.config_split.stage']['status'] = TRUE;
  $config['config_split.config_split.development']['status'] = FALSE;
}
else {
  $config['config_split.config_split.production']['status'] = FALSE;
  $config['config_split.config_split.stage']['status'] = FALSE;
  $config['config_split.config_split.development']['status'] = TRUE;
}

/**
 * Private file path:
 *
 * A local file system path where private files will be stored.
 */
$settings['file_private_path'] = dirname(debug_backtrace()[0]['file']) . '/files/private';
