-- 코드를 작성해주세요
with FRONT AS (
    SELECT SUM(CODE)
    FROM SKILLCODES
    WHERE CATEGORY = 'Front End'
)

SELECT
    CASE 
        WHEN SKILL_CODE & (SELECT * FROM FRONT) 
            AND SKILL_CODE & (SELECT CODE FROM SKILLCODES WHERE NAME = 'python')
        THEN 'A'
        
        WHEN SKILL_CODE & (SELECT CODE FROM SKILLCODES WHERE NAME = 'C#')
        THEN 'B'
        
        WHEN SKILL_CODE & (SELECT * FROM FRONT)
        THEN 'C'
    END AS `GRADE`, 
    ID,
    EMAIL
FROM
    DEVELOPERS
HAVING
    GRADE IS NOT NULL
ORDER BY GRADE, ID;