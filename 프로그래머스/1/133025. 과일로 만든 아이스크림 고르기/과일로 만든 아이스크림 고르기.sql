-- 코드를 입력하세요
SELECT f.flavor from FIRST_HALF f, ICECREAM_INFO i
where 1=1
and f.flavor = i.flavor
and f.total_order > 3000
and i.INGREDIENT_TYPE = 'fruit_based'
order by f.total_order desc



