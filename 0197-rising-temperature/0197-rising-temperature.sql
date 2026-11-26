/* Write your T-SQL query statement below */
with cte as (
    select id, recordDate, temperature, lag(temperature) over (order by recordDate) as T,
    lag(recordDate) over (order by recordDate) as K
    from Weather
)

select id as Id from cte
where temperature > T and datediff(day, K, recordDate) = 1