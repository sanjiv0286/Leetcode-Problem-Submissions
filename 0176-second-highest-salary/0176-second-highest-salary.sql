-- # Write your MySQL query statement below

-- select Max(salary) as SecondHighestSalary  from employee where salary <> (select max(salary) from employee);

select  max(e1.salary) as SecondHighestSalary  from employee e1 where 1 = (select count(distinct salary) from employee e2 where e2.salary > e1.salary);