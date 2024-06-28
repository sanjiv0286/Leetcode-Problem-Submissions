with first as (
    select 
        delivery_id,
        customer_id,
        min(order_date) as min_order_date,
        min(customer_pref_delivery_date) as min_customer_pref_delivery_date
    from 
        delivery
    group by 
        customer_id
)
select 
    round(
        sum(case when min_order_date = min_customer_pref_delivery_date then 1 else 0 end) * 100.0 / count(min_order_date), 2
    ) as immediate_percentage
from 
    first;
