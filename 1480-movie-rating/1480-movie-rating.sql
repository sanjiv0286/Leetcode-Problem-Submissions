(select u.name as results  from users as u  join MovieRating as mr on u.user_id = mr.user_id group by mr.user_id order by count(mr.user_id) desc, u.name  limit 1 )

union all

(select m.title as results
from movies m
 join MovieRating mr
on m.movie_id= mr.movie_id
where extract(year_month from created_at) = 202002
group by m.movie_id
order by avg(mr.rating) desc ,m.title
limit 1
)

-- In SQL, UNION and UNION ALL are both used to combine the results of two or more SELECT statements. However, there are key differences between the two:

-- ************************ UNION *********************************:

-- Combines the results of two or more SELECT statements into a single result set.
-- Removes duplicate rows from the result set.
-- Performs a DISTINCT operation on the result set.


-- ********************* UNION ALL ********************************:

-- Combines the results of two or more SELECT statements into a single result set.
-- Includes all rows from the result sets, including duplicates.
-- Does not perform a DISTINCT operation, making it faster than UNION.