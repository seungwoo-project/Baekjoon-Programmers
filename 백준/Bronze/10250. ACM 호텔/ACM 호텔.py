from math import ceil
t=int(input()) #테스트의 개수 입력

for _ in range(t): #테스트 개수만큼 반복
    h,w,n=map(int,input().split()) # h:호텔의 층 수, w:각 층의 방 수, n:몇 번째 손님
    a=str(n%h) # a: 층
    if a=='0':
        a=str(h)
    b=str(ceil(n/h)) # b: 호수
    if h*w>=n:
        if len(b)==1:
            print(a+"0"+b)
        else:
            print(a+b)
    else:
        break