-- 코드를 작성해주세요




select
distinct
id,
email,
first_name,
last_name
from developers D
inner join skillcodes S on D.skill_code & S.code = S.code 
and S.category = 'Front End'
order by id asc;






