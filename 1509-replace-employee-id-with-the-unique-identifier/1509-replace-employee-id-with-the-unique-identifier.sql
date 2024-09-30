select e2.unique_id  , e1.name from employees as e1 left join employeeuni as e2 on e1.id = e2.id;
