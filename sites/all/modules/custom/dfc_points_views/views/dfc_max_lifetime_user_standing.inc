<?php
/**
 * @file
 * Definition of example_handler_custom_field
 */
  
/**
 * Provides a custom views field.
 */
class dfc_max_lifetime_user_standing extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
  
  function render($data){
    $standing = $data->userpoints_max_lifetime_standing + 1;
    return $standing;
  }
  function query(){
    $this->query->add_field(NULL, '(SELECT COUNT(userpoints_max_lifetime_count.uid) FROM userpoints userpoints_max_lifetime_count INNER JOIN users userpoints_max_lifetime_count_users ON userpoints_max_lifetime_count_users.uid = userpoints_max_lifetime_count.uid AND userpoints_max_lifetime_count_users.status=1 WHERE userpoints_max_lifetime_count.points > 0 AND userpoints_max_lifetime_count.tid=1)', 'userpoints_max_lifetime_standing');
  }
}