dic = {
    'A+':	4.5,
    'A0':	4.0,
    'B+':   3.5,
    'B0':	3.0,
    'C+':	2.5,
    'C0':	2.0,
    'D+':	1.5,
    'D0':	1.0,
    'F'	:   0.0
}
total=0
sum=0
for i in range(20):
    a,b,c=input().split()
    if c=='P':
        continue
    else:
        total+=float(b) # 학점의 총합
        sum+=dic[c]*float(b) # (학점 * 과목평점) 의 합
print(sum/total)