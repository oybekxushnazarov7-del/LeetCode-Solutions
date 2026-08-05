CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    RETURN (
        /* Write your T-SQL query statement below. */
    select distinct salary 
    from 
    (
        select salary, 
            dense_rank() over (order by salary desc) as r
            from Employee
    ) as [getNthHighestSalary(2)]
        where r = @N 
    );
END