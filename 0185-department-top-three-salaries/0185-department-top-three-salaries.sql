select  Department , Employee , Salary from
(select d.name as Department , e.name as Employee , e.salary as Salary , 
dense_rank() over (partition by d.name order by e.salary desc  ) as ranks 
from employee as e join department as d on e.departmentId = d.id ) as Department_Top_Three_Salaries 
where ranks <=3;

-- ------------------------------------------------------------------
-- --------------------------------------------------------------------
--  ***dense_rank() function in sql 

-- select d.name as Department , e.name as Employee , e.salary as Salary , 
-- dense_rank() over (partition by d.name order by e.salary desc  ) as ranks 
-- from employee as e join department as d on e.departmentId = d.id

-- ----------------------------------------------------------------------
-- ----------------------------------------------------------------------

-- *** rank() function in sql 

-- select d.name as Department , e.name as Employee , e.salary as Salary , 
-- rank() over (partition by d.name order by e.salary desc  ) as ranks 
-- from employee as e join department as d on e.departmentId = d.id

