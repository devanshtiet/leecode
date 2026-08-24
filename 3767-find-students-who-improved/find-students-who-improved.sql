select s.student_id,s.subject,f.score as first_score,l.score as latest_score from Scores s join Scores f on s.student_id = f.student_id and s.subject=f.subject and f.exam_date= (select min(exam_date) from Scores where student_id=f.student_id and subject = f.subject)
join Scores l 
on s.student_id=l.student_id and s.subject=l.subject and l.exam_date= (select max(exam_date)from Scores
where student_id=l.student_id and subject=l.subject) 
group by s.student_id,s.subject,f.score,l.score
having count(distinct s.exam_date)>=2 and l.score>f.score
order by student_id,subject;
