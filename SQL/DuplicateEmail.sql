--DIFFICULTY : EASY
--EXPLANATION : LEFT JOIN the customers and orders table on the customer id column
--              The Missing values from the customer id in the orders table will have NULL
--              hence 


SELECT Person.email 
FROM Person
GROUP BY Person.email
HAVING COUNT(Person.email) > 1;

