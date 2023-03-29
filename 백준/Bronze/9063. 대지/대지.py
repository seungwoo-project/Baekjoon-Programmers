n=int(input())
x=[]
y=[]

for _ in range(n):
    xp, yp=map(int,input().split())
    x.append(xp)
    y.append(yp)

result = (max(x)-min(x))*(max(y)-min(y))
print(result)