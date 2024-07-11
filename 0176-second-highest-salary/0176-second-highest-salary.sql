-- select max(salary) as SecondHighestSalary from employee where salary not in (select max(salary) from employee );

select max(e1.salary) as SecondHighestSalary from employee as e1  where 1 = (select count(distinct e2.salary ) from employee as e2 where e2.salary>e1.salary);
