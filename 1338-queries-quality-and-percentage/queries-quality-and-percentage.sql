select q.query_name,
round(avg(q.rating/q.position),2) as quality 
,
round((
    select count(result) from Queries where rating <3 and query_name =q.query_name
    )*100/(select count(result) from Queries where query_name = q.query_name)
    ,2) as poor_query_percentage from Queries q group by q.query_name;
