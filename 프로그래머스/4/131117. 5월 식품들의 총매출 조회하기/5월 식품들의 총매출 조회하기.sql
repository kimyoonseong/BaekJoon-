-- 코드를 입력하세요

SELECT FOOD_PRODUCT.PRODUCT_ID ,PRODUCT_NAME, (A.AM*PRICE) AS TOTAL_SALES
FROM FOOD_PRODUCT,
(SELECT PRODUCT_ID, SUM(AMOUNT) AS AM
FROM FOOD_ORDER 
WHERE produce_date LIKE "2022-05%"
GROUP BY PRODUCT_ID)AS A
WHERE A.PRODUCT_ID= FOOD_PRODUCT.PRODUCT_ID
GROUP BY PRODUCT_NAME
ORDER BY TOTAL_SALES DESC ,FOOD_PRODUCT.PRODUCT_ID ASC

/*
SELECT PRODUCT_ID, SUM(AMOUNT) AS AM
FROM FOOD_ORDER 
WHERE IN_DATE LIKE "2022-05%"
GROUP BY PRODUCT_ID*/