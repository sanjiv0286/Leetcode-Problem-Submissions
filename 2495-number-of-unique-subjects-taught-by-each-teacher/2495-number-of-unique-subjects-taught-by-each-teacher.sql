# Write your MySQL query statement below
select teacher_id , count(distinct subject_id) as cnt from teacher group by teacher_id order by teacher_id , subject_id;