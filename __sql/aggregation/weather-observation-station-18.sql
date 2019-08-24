select round(abs(a-c) +abs(b-d),4)
from
(select min(lat_n) as a,max(lat_n) as b,min(long_w) as c,max(long_w) as d
from station
)as TEMP
