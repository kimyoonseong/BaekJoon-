-- 코드를 입력하세요
/*
select flavor 
from july,
(select (half.flavor)as fff,(half_sum+jul_sum)as total
from 
(select flavor, sum(total_order)as half_sum from first_half
group by flavor) as half,
(select flavor,sum(total_order)as jul_sum from july
group by flavor) as jul
where half.flavor=jul.flavor
order by total desc
limit 3)as ult
where july.flavor= ult.fff
*/
select july.flavor
from july,
(select half.flavor,(half_sum+jul_sum)as total
from 
(select flavor, sum(total_order)as half_sum from first_half
group by flavor) as half,
(select flavor,sum(total_order)as jul_sum from july
group by flavor) as jul
where half.flavor=jul.flavor
order by total desc
limit 3)as lim
where july.flavor=lim.flavor
group by july.flavor