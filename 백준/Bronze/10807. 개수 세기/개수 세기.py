n= int(input())
a=list(map(int,input().split()))
t=int(input())
cnt=0
for i in range(n):
    if t==a[i]:
        cnt+=1

print(cnt)