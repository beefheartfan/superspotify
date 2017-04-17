// Using the closure to map jQuery to $. 
(function ($) {

// Store our function as a property of Drupal.behaviors.
Drupal.behaviors.superspotifyDropdown = {
  attach: function (context, settings) {
      $( "#edit-genres" ).change(function() {
        if (this.value == 'All') {
            $('.album-row').show();
        }
        else {
            $('.album-row').hide();
            $('.'+this.value).show();
        }
    });
  }
};

}(jQuery));
