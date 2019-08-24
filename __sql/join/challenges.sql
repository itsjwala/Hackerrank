select hackers.hacker_id,hackers.name,count(*) as c
from hackers
inner join challenges on hackers.hacker_id = challenges.hacker_id
group by hackers.hacker_id,hackers.name
having 
-- selecting only max
c = (select count(*)
  from challenges
  group by challenges.hacker_id
  order by count(*) desc
  limit 1 )
or
-- seleting only 1's count
c in ( 
  select c1
  from 
  (select count(*) as c1
  from challenges
  group by challenges.hacker_id) as E
  group by c1
  having count(*) = 1
)
order by c desc,hackers.hacker_id



