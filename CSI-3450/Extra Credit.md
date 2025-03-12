Explain a scenario where you would use a trigger and another scenario where you would use a `CHECK` constraint. 

A scenario in which triggers are useful are in complex business situations. For example, if you have a Customers table, the email address column needs to be updated when the customer updates. Creating a trigger for this column will automatically update another table whenever the email is changed.

Check constraints are used to enforce data integrity. They can be viewed as if/else conditions. If a certain condition is met, perform the action. A simple scenario for using a check constraint is to verify the age of a user. If the included age is not 18 or older, then the data cannot be inserted into the table. 