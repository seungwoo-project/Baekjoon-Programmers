-- 코드를 입력하세요
SELECT member_id, member_name, gender, to_char(date_of_birth, 'yyyy-mm-dd') from member_profile
where 1=1
and not tlno = 'NULL'
and to_char(date_of_birth, 'mm') = '03'
and gender = 'W'
order by member_id asc