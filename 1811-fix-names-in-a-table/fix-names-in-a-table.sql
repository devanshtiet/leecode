-- # Write your MySQL query statement below
select user_id,concat(upper(substr(name,1,1)),lower(substr(name,2,length(name)))) as name from Users order by user_id;

# Write your MySQL query statement below
-- SELECT user_id, 
--        CONCAT(UPPER(SUBSTR(name, 1, 1)), LOWER(SUBSTR(name, 2))) AS name 
-- FROM Users 
-- ORDER BY user_id;