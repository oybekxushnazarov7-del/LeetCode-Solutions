/* Write your T-SQL query statement below */
SELECT Users.name,SUM(Transactions.amount) AS balance
FROM Users 
JOIN Transactions
ON Users.account = Transactions.account
GROUP BY Users.name
HAVING SUM(Transactions.amount) > 10000;