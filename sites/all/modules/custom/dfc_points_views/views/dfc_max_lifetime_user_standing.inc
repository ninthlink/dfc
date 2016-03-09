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
    $this->query->add_field(NULL, '(SELECT COUNT(userpoints_max_lifetime_count_users.uid) '
            . 'FROM users userpoints_max_lifetime_count_users '
            . 'LEFT JOIN userpoints userpoints_max_lifetime_count '
              . 'ON userpoints_max_lifetime_count_users.uid = userpoints_max_lifetime_count.uid '
            . 'WHERE userpoints_max_lifetime_count_users.status=1 '
              . 'AND ((userpoints_max_lifetime_count.tid=0 '
                . 'AND userpoints_max_lifetime_count.points > 0) '
                . 'OR userpoints_max_lifetime_count_users.uid < users.uid) '
              . 'AND userpoints_max_lifetime_count_users.uid NOT IN ('
                . 'SELECT uid FROM users_roles userpoints_max_lifetime_count_users_roles '
                . 'WHERE userpoints_max_lifetime_count_users_roles.rid = 3))', 'userpoints_max_lifetime_standing');
  }
}