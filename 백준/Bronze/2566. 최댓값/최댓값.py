s=[list(map(int,input().split())) for _ in range(9)]
r=[]

for i in range(9):
        r.append(max(s[i]))

for i in range(9):
        for j in range(9):
            if s[i][j] == max(r):
                   print(max(r))
                   print(i+1,j+1)
