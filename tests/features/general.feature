Feature: General
  As an anonymous user
  I have access to the site and can navigate through it.

Scenario: Frontpage
    Given I am not logged in
    When I am on the homepage
    Then I should see the text "Home"
    And I should see "This is the front page"
    And I should see "About"
    When I click "About"
    Then I should see "Welcome to our site"
