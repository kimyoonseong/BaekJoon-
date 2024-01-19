-- 코드를 입력하세요
#SELECT  ROUND(avg(dAILY_FEE), 0) as AVERAGE_FEE
#from CAR_RENTAL_COMPANY_CAR
#where car_type like "세단"
select  ROUND(avg(daily_fee),0)
from CAR_RENTAL_COMPANY_CAR
where car_type = "SUV"

