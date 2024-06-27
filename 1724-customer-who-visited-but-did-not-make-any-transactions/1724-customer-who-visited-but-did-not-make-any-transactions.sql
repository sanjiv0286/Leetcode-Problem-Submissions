select v.customer_id ,count(v.visit_id) as count_no_trans from visits as v left join transactions as t on v.visit_id = t.visit_id where transaction_id is null group by customer_id  order by customer_id;


-- **************************************************************

-- SELECT
--     v.customer_id,
--     COUNT(v.visit_id) AS count_no_trans
-- FROM
--     Visits v
-- WHERE
--     v.visit_id NOT IN (
--         SELECT
--             t.visit_id
--         FROM
--             Transactions t
--         NATURAL JOIN Visits v2
--     )
-- GROUP BY
--     v.customer_id
-- ORDER BY
--     v.customer_id;  -- You can order by any field you prefer, or not order at all
