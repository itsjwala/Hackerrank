SELECT * 
FROM(SELECT CITY, LENGTH(CITY) FROM STATION ORDER BY LENGTH(CITY),CITY)as A 
limit 1; 
SELECT *
FROM(SELECT CITY, LENGTH(CITY) FROM STATION ORDER BY LENGTH(CITY) DESC,CITY)as B
limit 1;

/*select *from(
select city ,length(city) from station
group by length(city)
) as E
order by length(city) asc;*/
