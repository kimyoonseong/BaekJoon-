-- 코드를 작성해주세요
#SELECT * 
#FROM ITEM_TREE 

# WITH A AS(SELECT * 
# FROM ITEM_INFO
# WHERE RARITY LIKE "RARE")

WITH B AS (SELECT A.ITEM_ID,A.ITEM_NAME
FROM ITEM_INFO A JOIN ITEM_TREE ON A.ITEM_ID = ITEM_TREE.ITEM_ID
WHERE RARITY LIKE "RARE")

SELECT ITEM_ID,ITEM_NAME,RARITY
FROM ITEM_INFO  
WHERE ITEM_ID IN (SELECT ITEM_TREE.ITEM_ID
FROM ITEM_TREE JOIN B ON ITEM_TREE.PARENT_ITEM_ID= B.ITEM_ID)
ORDER BY ITEM_ID DESC
#WHERE PARENT_ITEM_ID IS NOT NULL