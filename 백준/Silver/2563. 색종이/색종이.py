n=int(input())
a = [[0 for _ in range(100)] for _ in range(100)]
cnt=0
for _ in range(n):
    i,j=map(int,input().split())
    for k in range(i,i+10): 
        for l in range(j,j+10):
            a[k][l]=1
for k in range(100):
        for l in range(100):
                if a[k][l]==1:
                        cnt+=1

print(cnt)

