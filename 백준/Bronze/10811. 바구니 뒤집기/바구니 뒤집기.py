n,m=map(int,input().split()) # n은 바구니개수 , m은 횟수
lst=[ i for i in range(1,n+1)]
    
for _ in range(m):
    i,j=map(int,input().split())
    lst[i-1:j]=reversed(lst[i-1:j])
print(*lst)