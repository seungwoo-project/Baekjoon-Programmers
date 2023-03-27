n,m = map(int,input().split())
s=[]
d=[]
for i in range(n):
    s.append(list(map(int,input().split())))
for i in range(n):
    d.append(list(map(int,input().split())))

for i in range(n):
    for j in range(m):
        print(s[i][j]+d[i][j],end=' ')
    print()