-- select user_id,name,mail
-- from users
-- where
-- regexp_like (mail,'^[a-z]+[0-9a-zA-Z_.-]*@leetcode[.]{1}com$')


-- select * from Users where right(mail, 13) like "@leetcode.com" and left(mail, length(mail)-13) rlike '^[A-Za-z][A-Za-z0-9._-]*$'

-- ^[a-zA-Z] - The first character is a letter
-- [a-zA-Z0-9_.-]* - The accepted characters after the first repeated 0 or more times
-- @leetcode\.com$ - The email must end with the string '@leetcode.com'

SELECT user_id, name, mail
FROM Users
WHERE mail REGEXP '^[a-zA-Z]{1}[a-zA-Z0-9_.-]*@leetcode[.]com$'

