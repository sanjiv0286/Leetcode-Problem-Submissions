-- *****************************
-- select name , unique_id from Employees as e1 , EmployeeUNI as e2 where e1.id = e2.id ;
-- same 
-- *************************
select e1.name , e2.unique_id from Employees as e1 left  join EmployeeUNI as e2 on e1.id = e2.id;