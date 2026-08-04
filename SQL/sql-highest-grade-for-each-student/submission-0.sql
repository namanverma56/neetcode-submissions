-- Write your query below
with ranking as (
    select student_id,exam_id,score,row_number()over(partition by student_id order by score desc,exam_id asc) as  scoring from exam_results
)
select student_id,exam_id,score from ranking where scoring=1;
