-- select user_id,name,mail
-- from users
-- where
-- regexp_like (mail,'^[a-z]+[0-9a-zA-Z_.-]*@leetcode[.]{1}com$')

select * from Users where right(mail, 13) like "@leetcode.com" and left(mail, length(mail)-13) rlike '^[A-Za-z][A-Za-z0-9._-]*$'
