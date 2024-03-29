-- 코드를 입력하세요
SELECT BOARD_ID,	WRITER_ID	,TITLE	,PRICE	,
 CASE WHEN STATUS LIKE"SALE" then "판매중"
    WHEN STATUS LIKE"RESERVED" then "예약중"
    WHEN STATUS LIKE"DONE" then "거래완료"
    END AS STATUS
FROM USED_GOODS_BOARD 
WHERE CREATED_DATE LIKE "2022-10-05"
ORDER BY BOARD_ID DESC