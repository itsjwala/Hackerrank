select count(*)
from
(select *
from city 
where population>100000
) as T

