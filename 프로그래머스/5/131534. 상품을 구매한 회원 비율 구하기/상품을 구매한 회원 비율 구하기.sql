-- 코드를 입력하세요
# SELECT YEAR(SALES_DATE) AS YEAR, MONTH(SALES_DATE) AS MONTH#DISTINCT(ONLINE_SALE.USER_ID)
# FROM USER_INFO, ONLINE_SALE
# WHERE USER_INFO.USER_ID=ONLINE_SALE.USER_ID
#     AND JOINED LIKE "2021%"
    
    
SELECT   YEAR(A.SALES_DATE) AS YEAR, MONTH(A.SALES_DATE) AS MONTH 
        , COUNT(DISTINCT(A.USER_ID)) AS PUCHASED_USERS,
        ROUND(COUNT(DISTINCT B.USER_ID)/(SELECT COUNT(USER_ID) FROM USER_INFO WHERE YEAR(JOINED)='2021'), 1) AS PURCHASED_RATIO
   FROM   ONLINE_SALE AS A
     JOIN   USER_INFO AS B
        ON   A.USER_ID = B.USER_ID
WHERE  YEAR(B.JOINED) = '2021'
GROUP BY  YEAR(A.SALES_DATE), MONTH(A.SALES_DATE)
ORDER BY  YEAR ASC, MONTH ASC