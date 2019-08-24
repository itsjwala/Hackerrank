select c.company_code,c.founder,count(distinct l.lead_manager_code),count(distinct sm.senior_manager_code),count(distinct m.manager_code), count(distinct e.employee_code)
from company c
    join lead_manager l on l.company_code = c.company_code
    join senior_manager sm on l.lead_manager_code = sm.lead_manager_code
    join manager m on m.senior_manager_code = sm.senior_manager_code
    join employee e on  e.manager_code = m.manager_code
group by c.company_code,c.founder
order by c.company_code;




