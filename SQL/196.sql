--DIFFICULTY : EASY
--EXPLANATION : subquery to find the minimum id for every email and if an id is not in that subquery's result it is deleted ,
--so duplicate emails greater than the minimum id are deleted . 


DELETE FROM
Person
WHERE id NOT IN (
    SELECT MIN(ID) FROM 
    Person
    GROUP BY email
)
