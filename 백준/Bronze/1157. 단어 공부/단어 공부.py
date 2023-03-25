
s=input() # 문자열 입력받기
s=s.upper() # 대소문자 구별 없애기
cnt=[] # 문자마다의 개수 리스트에 넣기
word = list(set(s)) # 문자열중에 중복된 문자는 제거하고 비교
for i in word: # 한 문자마다 비교
    if i in s: # 문자열에 한 문자가 있으면
        cnt.append(s.count(i)) # cnt리스트에 그 문자 비교한 개수를 삽입

if cnt.count(max(cnt)) > 1: # 만약 cnt리스트의 맥스값이 2개이상이면 ?출력
    print('?')
else:
    max=cnt.index(max(cnt)) # 빈도수가 가장많은 인덱스를 max에 대입
    print(word[max]) # word리스트에 빈도수가 가장많이있는 인덱스 추출

