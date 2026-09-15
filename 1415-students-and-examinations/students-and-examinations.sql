# Write your MySQL query statement below
-- select s.student_id,s.student_name,e.subject_name,count(e.subject_name)
-- from Students s
-- left join  
-- Examinations e on s.student_id=e.student_id where s.
-- group by e.subject_name;
with temp as (
select s.student_id ,s.student_name,
sub.subject_name
from students s 
cross join subjects sub 
)
select t.student_id ,t.student_name ,t.subject_name,count(e.subject_name) as attended_exams 
from temp t left join examinations e 
on 
t.student_id=e.student_id 
and 
t.subject_name =e.subject_name
group by t.student_id,t.student_name,t.subject_name
order by t.student_id;


