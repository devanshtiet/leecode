# Write your MySQL query statement below
-- select a.customer_id,count(a.visit_id) as count_no_trans from Visits a left join Transactions b on a.visit_id =b.visit_id where b.transaction_id  is null group by a.customer_id;



select v.customer_id,count(v.visit_id) as count_no_trans from Visits v left join Transactions t on v.visit_id = t.visit_id where t.transaction_id is null group by customer_id;