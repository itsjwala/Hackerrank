select
case
when (a+b <= c OR b+c<=a OR a+c<=b) then "Not A Triangle"
when (a = b AND b = c) then "Equilateral"
when ((a = b AND b!=c) OR (a=c AND b!=c) OR (b=c AND a!=b)) then "Isosceles"
when (a!=b AND b!=c AND a!=c) then "Scalene"
end 
from TRIANGLES; 
