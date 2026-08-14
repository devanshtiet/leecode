# Write your MySQL query statement below
-- select max(num) from (select num from MyNumbers group by num having count(num)=1) as 

select case when count(num)=1 then num else null END as num from MyNumbers group by num
order by num desc limit 1;