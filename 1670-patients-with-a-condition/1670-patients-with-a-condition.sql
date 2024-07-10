-- select * from patients where  conditions  like "DIAB1%" 
-- union 
-- select * from patients where  conditions  like "% diab1%"

SELECT *
FROM Patients
WHERE conditions REGEXP '\\bDIAB1';
