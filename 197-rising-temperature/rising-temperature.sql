-- select w.id 
-- from Weather w
-- join Weather t 
-- on w.recordDate = t.recordDate + 1
-- where w.temperature > t.temperature;



select w1.id from Weather w1,Weather w2 where datediff(w1.recordDate,w2.recordDate)=1 and w1.temperature>w2.temperature;