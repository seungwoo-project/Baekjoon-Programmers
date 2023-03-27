n,m = map(int,input().split()) #n은 바구니 개수 , m은 횟수
a=[i for i in range(1,n+1)]
for _ in range(m):
    i,j = map(int,input().split())
    a[i-1],a[j-1]=a[j-1],a[i-1]

for i in range(n):
    print(a[i],end=' ')