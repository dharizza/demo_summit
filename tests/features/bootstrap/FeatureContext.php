<?php

use Behat\Behat\Context\Context;
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;
use Behat\Behat\Tester\Exception\PendingException;
use Drupal\DrupalExtension\Context\RawDrupalContext;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext
{
    /**
     * Initializes context.
     *
     * Every scenario gets its own context instance.
     * You can also pass arbitrary arguments to the
     * context constructor through behat.yml.
     */
    public function __construct()
    {
    }

    /**
     * @Then I am in the page :path
     */
    public function iAmInThePage($path) {
      global $base_url;
      $current_path = $this->getSession()->getCurrentUrl();
      $url = $base_url . "/" . $path;
      if ($current_path !== $url) {
        throw new Exception("You are in " . $current_path . " instead of " . $url);
      }
    }
}
