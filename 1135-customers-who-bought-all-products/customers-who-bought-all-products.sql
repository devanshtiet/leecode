# Write your MySQL query statement below
with temp as (
    select customer_id,product_key,count(distinct product_key) as cnt from customer group by customer_id
)
-- select * from temp;
select customer_id from temp where cnt=(select count(distinct product_key) from product);