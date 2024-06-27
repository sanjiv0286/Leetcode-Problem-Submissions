-- # Write your MySQL query statement below
-- select name from employee where managerId is null && count(select managerId from employee where managerId is null)>=5;

select name
from Employee
where id in (
    select managerId
    from Employee
    group by managerId
    having count(*) >= 5
);
