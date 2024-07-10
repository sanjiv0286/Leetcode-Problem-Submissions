-- select * from patients where  conditions  like "DIAB1%" 
-- union 
-- select * from patients where  conditions  like "% diab1%"

SELECT *  FROM Patients WHERE conditions REGEXP '\\bDIAB1';


-- \\b: This is a word boundary anchor. it ensures that "DIAB1" is treated as a distinct word or prefix.

-- So, '\\bDIAB1' together matches "DIAB1" at the beginning of a word or as a standalone word. This ensures that "DIAB1" is not part of another string like "ADIAB1C".

-- "DIAB100": Matches because "DIAB1" is at the beginning of the word.
-- "ACNE DIAB100": Matches because "DIAB1" is at the beginning of the word "DIAB100".
-- "YFEV DIAB1 MYOP": Matches because "DIAB1" is a standalone word.