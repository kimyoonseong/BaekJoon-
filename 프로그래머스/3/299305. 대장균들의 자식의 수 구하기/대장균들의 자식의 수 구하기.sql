-- 코드를 작성해주세요
SELECT B.ID AS ID,COUNT(A.PARENT_ID) AS CHILD_COUNT
FROM ECOLI_DATA AS A
RIGHT JOIN ECOLI_DATA AS B
ON A.PARENT_ID = B.ID
GROUP BY B.ID
