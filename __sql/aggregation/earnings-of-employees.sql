select e,c
from
(select (months*salary) as e,count(*) as c
from employee 
group by e
)as E
order by e desc
limit 1;
