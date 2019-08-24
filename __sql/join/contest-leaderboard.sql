select T3.hacker_id,T3.name,T2.score1
from hackers T3
join
    (select T1.hacker_id,sum(T.score) as score1
    from hackers T1
    join 
        (select a.hacker_id,b.challenge_id,max(b.score) as score
        from hackers a
        join submissions b on a.hacker_id = b.hacker_id
        group by a.hacker_id,b.challenge_id) T
        on T1.hacker_id = T.hacker_id
    group by T1.hacker_id) T2
    on T3.hacker_id = T2.hacker_id
where T2.score1 <> 0
order by T2.score1 desc, T3.hacker_id;
