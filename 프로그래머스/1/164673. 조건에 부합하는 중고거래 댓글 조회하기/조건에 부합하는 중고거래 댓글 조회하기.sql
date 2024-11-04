-- 코드를 입력하세요
SELECT ub.title, ub.board_id, ur.reply_id, ur.writer_id, ur.contents, to_char(ur.created_date,'yyyy-mm-dd') as created_date
from USED_GOODS_BOARD ub, USED_GOODS_REPLY ur
where 1=1
and ub.board_id = ur.board_id
and to_char(ub.created_date, 'yyyy-mm') = '2022-10'
order by ur.created_date asc, ub.title asc