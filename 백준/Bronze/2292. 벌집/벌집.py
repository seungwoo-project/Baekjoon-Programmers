t=int(input())
a=1
cnt=0

while a < t :
    a=a+cnt*6
    cnt+=1
if a==1:
    print(cnt+1)
else:
    print(cnt)