Feature: User login redirect
  As an administrator user
  I can set the path to which users with each role of the site will be redirected
  In order to provide a better experience for them.

@api
Scenario: Access user login redirect configuration form
    Given I am logged in as a user with the 'administrator' role
    When I am on "admin/config/people/user-login-redirect"
    Then I should see "User login redirect Config"
    Given I am not logged in
    When I am on "admin/config/people/user-login-redirect"
    Then I should not see "User login redirect Config"

@api
Scenario: Configure user login redirect
    Given I am logged in as a user with the 'administrator' role
    When I am on "admin/config/people/user-login-redirect"
    And I fill in "admin/structure" for "Redirect path for role administrator"
    And I fill in "-1" for "Weight for role administrator"
    And I fill in "<front>" for "Redirect path for role site manager"
    And I fill in "0" for "Weight for role site manager"
    And I fill in "node/add" for "Redirect path for role content creator"
    And I fill in "1" for "Weight for role content creator"
    And I fill in "node/2" for "Redirect path for role authenticated user"
    And I fill in "10" for "Weight for role authenticated user"
    And I press "Save configuration"
    Then I should see "The configuration options have been saved."
    But I should not see "You must set a valid url"

@api
Scenario Outline: Log in and get redirected.
    Given users:
      | name        | mail          | roles           | pass |
      | bob_admin   | bob@test.com  | administrator   | 123  |
      | jon_manager | jon@test.com  | site manager    | 123  |
      | zoe_creator | zoe@test.com  | content creator | 123  |
      | cris        | cris@test.com |                 | 123  |
    And I am on "user/login"
    When I fill in "<user>" for "Username"
    And I fill in "<pass>" for "Password"
    And I press "Log in"
    Then I am in the page "<page>"

    Examples:
      | user        | pass | page            |
      | bob_admin   | 123  | admin/structure |
      | jon_manager | 123  |                 |
      | zoe_creator | 123  | node/add        |
      | cris        | 123  | node/2          |
