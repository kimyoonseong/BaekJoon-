-- 코드를 작성해주세요
SELECT  DISTINCT employ.EMP_NO,employ.EMP_NAME ,
         CASE 
            when e_score >=96 then "S"
            when e_score>=90 then "A"
            when e_score>= 80 then "B"
            else "C"
            END as GRADE,
        CASE 
            when e_score>=96 then SAL * 0.2
            when e_score>=90 then SAL * 0.15
            when e_score>= 80 then SAL * 0.1
            ELSE 0
            END as Bonus
FROM HR_EMPLOYEES  as employ 
    INNER JOIN( SELECT DISTINCT EMP_NO, SUM(SCORE) OVER (PARTITION BY EMP_NO)/2
    AS e_score FROM HR_GRADE)AS GRADE ON employ.EMP_NO=GRADE.EMP_NO                                           
ORDER BY employ.EMP_NO;