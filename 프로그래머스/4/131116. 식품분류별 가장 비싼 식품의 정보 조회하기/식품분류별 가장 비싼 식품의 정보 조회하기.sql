-- 코드를 입력하세요
#SELECT CATEGORY	,MAX(PRICE) AS MAX_PRICE,PRODUCT_NAME
#FROM FOOD_PRODUCT 
#WHERE CATEGORY LIKE "과자" OR
#CATEGORY LIKE "국" OR
#CATEGORY LIKE "김치" OR
#CATEGORY LIKE "식용유"
#GROUP BY CATEGORY
#ORDER BY PRICE DESC

SELECT category,price, product_name
from food_product
where price in(select max(price) from food_product group by category )
and category in('과자','국','김치','식용유')
group by category, product_name
order by price desc