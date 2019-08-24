select sum(city.POPULATION)
from CITY
inner join COUNTRY on CITY.countrycode=country.code
where country.continent='Asia'
