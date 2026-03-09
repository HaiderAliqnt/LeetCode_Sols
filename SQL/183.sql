--DIFFICULTY : EASY
--EXPLANATION : LEFT JOIN the customers and orders table on the customer id column
--the Missing values from the customer id in the orders table will have NULL
--hence we can just display the null values


SELECT Customers.name AS Customers
FROM Customers 
LEFT JOIN Orders
ON Customers.id = Orders.customerID 
WHERE Orders.customerID IS NULL;


