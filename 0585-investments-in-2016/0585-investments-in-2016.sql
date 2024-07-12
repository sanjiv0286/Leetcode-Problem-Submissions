SELECT ROUND(SUM(t1.tiv_2016), 2) AS tiv_2016
FROM Insurance t1
WHERE 
    t1.tiv_2015 IN (
        SELECT tiv_2015
        FROM Insurance
        GROUP BY tiv_2015
        HAVING COUNT(*) > 1
    )
    AND NOT EXISTS (
        SELECT 1
        FROM Insurance t2
        WHERE t1.lat = t2.lat AND t1.lon = t2.lon AND t1.pid != t2.pid
    );
