--DIFFICULTY : EASY
--EXPLANATION : Group the login dates by id and then select the minimum date from within that group / id


SELECT Activity.player_id , MIN(event_date) AS first_login
FROM Activity
GROUP BY Activity.player_id;