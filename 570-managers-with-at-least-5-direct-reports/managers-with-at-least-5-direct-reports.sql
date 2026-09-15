# Write your MySQL query statement belows
select e2.name from employee e1 join employee e2 on e1.managerid=e2.id group by e2.id,
e2.name having count(e1.id)>=5;