--DIFFICULTY : EASY
--EXPLANATION : SELF JOIN the employee table merging the employee id with the manager id column
--then simply place the salary condition



SELECT E1.name AS Employee 
FROM Employee E1
INNER JOIN Employee E2 
ON E2.id = E1.managerId
AND E1.salary > E2.salary;