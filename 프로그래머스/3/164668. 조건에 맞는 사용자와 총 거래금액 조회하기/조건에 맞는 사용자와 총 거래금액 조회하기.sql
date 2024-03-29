-- 코드를 입력하세요
#SELECT USER_ID,	NICKNAME	,SUM(PRICE) AS TOTAL_SALES
#FROM USED_GOODS_BOARD, USED_GOODS_USER
#WHERE STATUS LIKE "DONE" AND  USED_GOODS_BOARD.WRITER_ID =  USED_GOODS_USER.USER_ID
#GROUP BY USER_ID
#HAVING TOTAL_SALES ASC>700000
#ORDER BY TOTAL_SALES ASC
SELECT USER_ID, NICKNAME, SUM(PRICE) AS TOTAL_SALES
FROM USED_GOODS_BOARD
JOIN USED_GOODS_USER ON USED_GOODS_BOARD.WRITER_ID = USED_GOODS_USER.USER_ID
WHERE STATUS = 'DONE'
GROUP BY USER_ID
HAVING TOTAL_SALES >= 700000
ORDER BY TOTAL_SALES ASC;
/*
SELECT U.USER_ID AS USER_ID
     , U.NICKNAME AS NICKNAME
     , SUM(PRICE) AS TOTAL_SALES
FROM USED_GOODS_BOARD AS B
    INNER JOIN USED_GOODS_USER AS U ON B.WRITER_ID = U.USER_ID
WHERE B.STATUS = 'DONE'
GROUP BY USER_ID
HAVING SUM(PRICE) >= 700000
ORDER BY TOTAL_SALES;*/