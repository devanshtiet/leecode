# Write your MySQL query statement below
select e.employee_id,e.name,count(*) as reports_count,
round(avg(Employees.age)) as average_age from Employees join Employees e on 
Employees.reports_to = e.employee_id group by  e.employee_id,e.name order by e.employee_id;