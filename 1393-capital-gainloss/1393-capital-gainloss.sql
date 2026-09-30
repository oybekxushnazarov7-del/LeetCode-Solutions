/* Write your T-SQL query statement below */
select stock_name, 
    SUM(
        Case
            when operation = 'Sell' then +price
            when operation = 'Buy' then -price
        End 
    ) as capital_gain_loss
from Stocks
group by stock_name