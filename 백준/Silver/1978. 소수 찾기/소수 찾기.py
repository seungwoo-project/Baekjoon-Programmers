n=int(input())
a=list(map(int,input().split()))

cn=0
for i in range(n):
    cnt =0
    for j in range(1,a[i]+1):
        if a[i] % j ==0:
            cnt+=1
        else:
            continue
    if cnt==2:
        cn+=1

print(cn)