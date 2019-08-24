select T1.id,T.age,T.coins_needed,T.power
from wands T1
join
    (select a.code,avg(b.age) as age,min(a.coins_needed) as coins_needed,a.power
    from wands a, wands_property b
    where a.code = b.code and b.is_evil=0
    group by a.code,a.power) T
    on T1.code = T.code and T1.coins_needed = T.coins_needed and T1.power = T.power
order by T1.power desc, T.age desc;
    




