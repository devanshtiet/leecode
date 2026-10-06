with temp as(
    select p.product_id,p.product_name,p.product_category,o.order_date,o.unit  from Products p join orders o on p.product_id=o.product_id where o.order_date like '2020-02%'
)
select product_name,sum(unit) as unit from temp group by product_name having sum(unit)>=100;