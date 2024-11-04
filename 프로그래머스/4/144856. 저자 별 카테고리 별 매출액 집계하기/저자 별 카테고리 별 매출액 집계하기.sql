# -- 코드를 입력하세요
# SELECT AUTHOR.AUTHOR_ID ,AUTHOR_NAME,CATEGORY,(SUM(PRICE*SALES))AS TOTAL_SALES
# FROM BOOK,AUTHOR,BOOK_SALES 
# WHERE BOOK.BOOK_ID=BOOK_SALES.BOOK_ID AND AUTHOR.AUTHOR_ID=BOOK.AUTHOR_ID
#         AND SALES_DATE LIKE ("%2022-01%")
# GROUP BY AUTHOR.AUTHOR_ID,CATEGORY
# ORDER BY AUTHOR.AUTHOR_ID ASC, CATEGORY DESC

SELECT AUTHOR.AUTHOR_ID, AUTHOR_NAME, CATEGORY,  SUM(SALES*PRICE) AS TOTAL_SALES
FROM BOOK, AUTHOR, BOOK_SALES
WHERE BOOK.BOOK_ID=BOOK_SALES.BOOK_ID 
    AND AUTHOR.AUTHOR_ID=BOOK.AUTHOR_ID
    AND SALES_DATE LIKE "2022-01%"
GROUP BY AUTHOR.AUTHOR_ID,CATEGORY
ORDER BY AUTHOR.AUTHOR_ID ASC, CATEGORY DESC












