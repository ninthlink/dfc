<?php
/**
 * @file
 * Definition of example_handler_custom_field
 */
  
/**
 * Provides a custom views field.
 */
class dfc_lifetime_user_standing extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
  
  function render($data){
    $standing = $data->userpoints_lifetime_standing + 1;
    return $standing; 
  }
  function query(){
    if(!isset($this->query->table_queue['userpoints_lifetime'])){
        $table = 'userpoints';
        $left_table = 'users';
        $left_field = 'uid';
        $field = 'uid';
        $join = new views_join();
        $alias = 'userpoints_lifetime';
        $extra = array();
        $extra[] = array(
          'table' => $alias,
          'field' => 'tid',
          'value' => 0,
          'operator' => '=',
        );
        $join->construct($table, $left_table, $left_field, $field, $extra, 'LEFT');
        $alias = $this->query->add_relationship($alias, $join, $this->table_alias, $this->relationship);
        $this->query->add_field($alias, 'points');
    }
    $this->query->add_field(NULL, '(SELECT COUNT(userpoints_lifetime_count.uid) '
      . 'FROM userpoints userpoints_lifetime_count '
      . 'INNER JOIN users userpoints_lifetime_count_users '
        . 'ON userpoints_lifetime_count_users.uid = userpoints_lifetime_count.uid '
        . 'AND userpoints_lifetime_count_users.status=1 '
      . 'WHERE userpoints_lifetime_count.tid=0 '
        . 'AND (userpoints_lifetime_count.points > userpoints_lifetime_points OR (userpoints_lifetime_count.points = userpoints_lifetime_points AND userpoints_lifetime_count.last_update < userpoints_lifetime.last_update))'
        . 'AND userpoints_lifetime_count.uid NOT IN '
          . '(SELECT uid '
            . 'FROM users_roles userpoints_lifetime_count_users_roles '
            . 'WHERE userpoints_lifetime_count_users_roles.rid = 3))', 'userpoints_lifetime_standing');
  }
}