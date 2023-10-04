# Write your MySQL query statement below
Select email
From Person group by email 
having count(distinct id)>1;