select CEIL(AVG(salary)-AVG(TO_NUMBER(REPLACE(TO_CHAR(salary),'0',''))))
from employees;
