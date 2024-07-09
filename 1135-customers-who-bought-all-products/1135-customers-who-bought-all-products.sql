-- select news.customer_id from 
-- (select c.customer_id , count(distinct p.product_key)  as ct from product as p  join customer as c  where c.product_key = p.product_key  group by c.customer_id) as news  having max(news.ct );


-- ***************************************************

SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (SELECT COUNT(*) FROM Product);
