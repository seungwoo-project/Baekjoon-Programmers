n,m = map(int,input().split()) #n은 바구니 개수 , m은 횟수
a=[0 for _ in range(n)]
for _ in range(m):
    i,j,k=map(int,input().split())
    for c in range(i-1,j):
        a[c]=k

for i in range(n):
    print(a[i],end=' ')