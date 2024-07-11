select * from users where mail regexp '^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode[.]com$';

-- -----------------------------------------------------------
-- -----------------------------------------------------------

-- ^[a-zA-Z] - The first character is a letter
-- [a-zA-Z0-9_.-]* - The accepted characters after the first repeated 0 or more times
-- @leetcode\.com$ - The email must end with the string '@leetcode.com'

