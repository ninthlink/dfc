jQuery(document).ready(function(){
  if ( jQuery('#dfc-user-flop').size() > 0 ) {
    jQuery('#member_info_link').unbind('click.dfc').bind('click.dfc',function() {
      jQuery('#block-dfc-flop-menu-userflop').slideToggle(100);
      return false;
    });
    if ( jQuery('#dfc-user-flop a.x').size() == 0 ) {
      jQuery('<a href="#x" class="x">x</a>').click(function() {
        jQuery('#block-dfc-flop-menu-userflop').slideUp(41);
        return false;
      }).appendTo('#dfc-user-flop');
    }
  }
});