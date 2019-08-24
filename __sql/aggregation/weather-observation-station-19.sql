select format(sqrt(power(x1-x2,2) +power(y1-y2,2)),4) 
from
(select min(lat_n) as x1,min(long_w) as y1 ,max(lat_n) as x2,max(long_w) as y2
from station) as E
