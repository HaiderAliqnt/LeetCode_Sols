--DIFFICULTY : EASY
--Explanation: JOIN the two tables on the common key empid and then look for the condition
--use HAVING INSTEAD OF WHERE/AND due to LEETCODE judge problem  

SELECT Employee.name AS name , Bonus.bonus 
FROM Employee 
LEFT JOIN Bonus
ON  Bonus.empId = Employee.empId 
HAVING ((Bonus.bonus < 1000) OR (Bonus.bonus is NULL)); 