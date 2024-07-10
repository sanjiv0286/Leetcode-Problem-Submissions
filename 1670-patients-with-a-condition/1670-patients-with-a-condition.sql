-- select * from patients where  conditions  like "%DIAB1%"
select * from patients where  conditions  like "diab1%" 
union 
select * from patients where  conditions  like "% diab1%"

