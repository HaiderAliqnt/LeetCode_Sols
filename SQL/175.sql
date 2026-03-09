--DIFFICULTY : EASY
--EXPLANATION : Simply JOIN the person and address table with left since we can have null address values 
--but no null values in person table

SELECT Person.firstName , Person.lastName , Address.city , Address.state 
FROM Person 
LEFT JOIN Address 
ON Person.personID = Address.personID; 