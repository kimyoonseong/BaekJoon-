# -- 코드를 입력하세요
# SELECT ID,NAME,HOST_ID
# FROM PLACES
# WHERE HOST_ID IN
# (SELECT  HOST_ID
# FROM PLACES
# GROUP BY HOST_ID
# HAVING COUNT(ID)>1)
# ORDER BY ID


select id,name,host_id
from places
where host_id in (
select host_id 
from places
group by host_id
having count(id)>1)