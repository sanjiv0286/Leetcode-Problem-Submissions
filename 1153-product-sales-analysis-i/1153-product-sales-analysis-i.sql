# Write your MySQL query statement below
select s.year , s.price , p.product_name  from sales as s left join  product as p on s.product_id = p.product_id;