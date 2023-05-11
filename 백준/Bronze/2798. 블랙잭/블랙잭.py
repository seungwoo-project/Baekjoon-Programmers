
n,m = map(int,input().split())

a=list(map(int,input().split()))
sum=0

a.sort()

for i in range(n-2):
    for j in range(i+1,n-1):
        for k in range(j+1,n):
            if(sum<=a[i]+a[j]+a[k]<=m):
                sum=a[i]+a[j]+a[k]
           

print(sum)