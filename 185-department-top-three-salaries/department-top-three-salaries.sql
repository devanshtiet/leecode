# Write your MySQL query statement below
select Department,Employee,Salary from(
    select d.name as Department,
    e.name as Employee,
    e.salary,dense_rank() over(
    partition by e.departmentId order by e.salary desc) as rnk FROM Employee e
JOIN Department d
ON e.departmentId = d.id) x where rnk<=3;