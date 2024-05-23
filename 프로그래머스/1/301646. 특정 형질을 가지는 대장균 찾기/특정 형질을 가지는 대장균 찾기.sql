-- 코드를 작성해주세요
select count(ID) AS COUNT
from ECOLI_DATA
where (GENOTYPE & 5) and !(GENOTYPE & 2)

