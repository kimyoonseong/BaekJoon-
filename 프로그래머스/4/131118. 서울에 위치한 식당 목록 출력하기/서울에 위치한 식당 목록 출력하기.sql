

SELECT REST_INFO .REST_ID,REST_NAME,FOOD_TYPE,FAVORITES,ADDRESS,ROUND(AVG(REVIEW_SCORE), 2) AS SCORE
FROM REST_INFO ,REST_REVIEW
WHERE REST_INFO.REST_ID=REST_REVIEW .REST_ID AND ADDRESS LIKE '서울%'
GROUP BY REST_INFO.REST_ID
ORDER BY SCORE DESC, FAVORITES DESC;

