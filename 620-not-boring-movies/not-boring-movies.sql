# Write your MySQL query statement below
SELECT * FROM cinema
Where id%2 = 1 and description != 'boring'
order by rating DESC;