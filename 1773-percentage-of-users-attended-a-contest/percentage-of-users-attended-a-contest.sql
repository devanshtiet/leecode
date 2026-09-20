# Write your MySQL query statement below
with temp as (
    select u.user_id,r.contest_id,count(r.contest_id)  as countt from users u
    right join register r on u.user_id=r.user_id group by  r.contest_id
)
select contest_id, 
round((countt*100/(select count(*) from Users)),2) as percentage
from temp order by percentage desc , contest_id asc;