<?php
/**
 * @file
 * Definition of example_handler_custom_field
 */
  
/**
 * Provides a custom views field.
 */
class dfc_monthly_user_standing extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
  
  function render($data){
    $standing = $data->userpoints_monthly_standing + 1;
    return $standing; 
  }
  function query(){
    if(!isset($this->query->table_queue['userpoints_monthly'])){
        $table = 'userpoints';
        $left_table = 'users';
        $left_field = 'uid';
        $field = 'uid';
        $join = new views_join();
        $alias = 'userpoints_monthly';
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
    $this->query->add_field(NULL, '(SELECT COUNT(uid) FROM userpoints userpoints_monthly_count WHERE userpoints_monthly_count.points > userpoints_monthly_points)', 'userpoints_monthly_standing');
  }
}