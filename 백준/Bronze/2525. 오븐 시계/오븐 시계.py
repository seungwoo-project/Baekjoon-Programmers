h,m = map(int,input().split()) #현재 시각
t=int(input()) #타이머

m += t%60 #나머지 분
h += t//60 #나머지 시간

if m>59:
    h+=1
    m-=60
if h>23:
    h-=24

print(h,m)
