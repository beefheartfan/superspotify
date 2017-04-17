
-- SUMMARY --

The SuperSpotify module allows Spotify users to be able to display their "Saved Albums" in a list that can be filtered by musical genres.  The genre list is generated dynamically from the albums that the user has saved. The list is located at /superspotify/authorize/

An example of the module in action is located at http://www.plencnerlabs.com/superspotify/authorize/


-- REQUIREMENTS --

The module requires the following PHP Libraries:
 * CURL (http://php.net/manual/en/curl.setup.php)


-- INSTALLATION --

* Install as usual, see http://drupal.org/node/895232 for further information.

* Sign up for a Spotify Premium account at https://www.spotify.com/premium/

* Save albums to Your Music in your Spotify Premium account, see https://support.spotify.com/us/using_spotify/collect_music/what-is-your-music/ for further information.


-- CONFIGURATION --

* Configure user permissions in Administration » People » Permissions:

  - Access Super Spotify 

    Users in roles with the "Access Super Spotify" permission will see see the album list at /superspotify/authorize/.

  - Configure Super Spotify

    Users in roles with the "Configure Super Spotify " permission can update the Spotify API settings to use your own Spotify API App. The SuperSpotify module is initally set up with an existing Spotify API App.

* Customize the Spotify API settings in Administration » Configuration and modules »
  Content Authoring » Super Spotify.


-- FAQ --

Q: How do I use the Super Spotify module?

A: Go to /superspotify/authorize/. It will prompt you to login to your Spotify Premium account. Once you login, it will prompt you to allow the Super Spotify App to access your Spotify Premium Account. After allowing access, it will load Your Music albums in a list with a dropdown menu at the top to filter by genre.

-- CONTACT --

Current maintainers:
* Philp Plencner (beefheartfan) - https://www.drupal.org/u/beefheartfan
