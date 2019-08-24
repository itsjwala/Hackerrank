select distinct city from station
where city not in (select distinct city from station where city regexp '^[aeiou]' or city regexp '[aeiou]$')
