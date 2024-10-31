-- 코드를 입력하세요
SELECT rr.rest_id, rest_name, food_type, favorites, address, round(avg(rr.review_score),2) as score
from rest_review rr, rest_info ri
where 1=1
and rr.rest_id = ri.rest_id
and substr(ri.address,1,2) = '서울'
group by rr.rest_id, rest_name, food_type, favorites, address
order by score desc, FAVORITES desc
