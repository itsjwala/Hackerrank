select (CASE WHEN grade <8 THEN NULL ELSE name END)as name,grade,marks
from students
inner join grades
on marks between min_mark and max_mark
order by grade desc,name,marks;
