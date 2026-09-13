# Write your MySQL query statement below
select ee.unique_id ,emp.name from Employees emp left join EmployeeUNI ee on emp.id=ee.id;