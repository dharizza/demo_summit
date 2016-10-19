<?php

use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;
use Behat\Behat\Tester\Exception\PendingException;

/**
 * Defines application features from the specific context.
 */
class DebugContext extends RawDrupalContext implements SnippetAcceptingContext {

  /**
   * Initializes context.
   *
   * Every scenario gets its own context instance.
   * You can also pass arbitrary arguments to the
   * context constructor through behat.yml.
   */
  public function __construct() {
  }

  /**
   * @Then I am in the page :path
   */
  public function iAmInThePage($path) {
    global $base_url;
    $current_path = $this->getSession()->getCurrentUrl();
    $url = $base_url.$path;

    if ($current_path !== $url) {
      throw new Exception("The actual page is " . $current_path . " instead of " . $url);
    }
  }

}
