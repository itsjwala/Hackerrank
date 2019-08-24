select format(lat_n,4) 
from 
(select lat_n 
from station
order by lat_n 
limit 250) as E
order by lat_n desc
limit 1
