n,m=map(int,input().split())
n=[i+1 for i in range(n)]

for _ in range(m):
    i,j,k=map(int,input().split()) # n[k]의 인덱스 부터 n[j]까지 그리고 n[i] 부터 n[j-1]까지
    i=i-1
    j=j-1
    k=k-1
    n[i:j+1]=n[k:j+1]+n[i:k]
print(*n)