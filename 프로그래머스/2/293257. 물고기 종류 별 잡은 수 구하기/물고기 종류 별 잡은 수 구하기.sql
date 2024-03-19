with a as (
    select count(fish_type) as FISH_COUNT
        , FISH_TYPE
    from FISH_INFO 
    group by FISH_TYPE

)

select a.FISH_COUNT as FISH_COUNT
    , n.FISH_NAME as FISH_NAME
from a
    left join FISH_NAME_INFO as n on a.FISH_TYPE = n.FISH_TYPE
order by a.FISH_COUNT desc


# with cte as (
# select count(fish_type) as fish_count, fish_type
# from fish_info 
# group by fish_type
# )

# select fish_count, fish_name
# from cte c
# left join fish_name_info using(fish_type)
# order by fish_count desc;

# ;