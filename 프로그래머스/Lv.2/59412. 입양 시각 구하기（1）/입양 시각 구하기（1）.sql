-- 코드를 입력하세요
SELECT  DATE_FORMAT(datetime, '%H') AS HOUR ,COUNT(*)
from ANIMAL_OUTS
where DATE_FORMAT(datetime, '%H')<20 and DATE_FORMAT(datetime, '%H')>8
GROUP BY HOUR
ORDER BY HOUR ASC
