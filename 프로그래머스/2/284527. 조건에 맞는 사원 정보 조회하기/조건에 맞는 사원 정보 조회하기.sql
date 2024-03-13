-- 코드를 작성해주세요
# select max_score,
#         HR_EMPLOYEES.emp_no,
#         emp_name,
#         position,
#         email
# from HR_EMPLOYEES, (select sum(score),emp_no as max_score from HR_GRADE group by emp_no)as A
# where HR_EMPLOYEES.emp_no=A.emp_no
#     and YEAR=2022
# order by max_score desc 
select A.SCORE,
         HR_EMPLOYEES.emp_no,
         emp_name,
         position,
         email
from hr_employees,(select sum(score)as SCORE,emp_no from HR_GRADE WHERE YEAR=2022 group by emp_no )as A
where HR_EMPLOYEES.emp_no=A.emp_no 
order by A.SCORE desc
LIMIT 1;