/* Write your T-SQL query statement below */
-- SELECT 
--     sell_date,
--     COUNT(DISTINCT product) AS num_sold,
--     STRING_AGG(product, ',') AS products
-- FROM 
--     Activities
-- GROUP BY 
--     sell_date
-- ORDER BY 
--     sell_date;

with cte as (
    select distinct
    sell_date
    ,product
    from Activities 
) select sell_date, count(*) as num_sold, string_agg(product, ',') as products
from cte group by sell_date