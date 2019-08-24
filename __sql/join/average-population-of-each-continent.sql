/*select country.continent,round(avg(city.population))
from city,country
where  countrycode=code
group by  (continent)*/
select continent,floor(avg(city.population))
from city,country
where countrycode=code
group by continent;
