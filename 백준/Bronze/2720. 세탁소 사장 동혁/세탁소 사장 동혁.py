n=int(input())
c=[]
for _ in range(n):
    a=int(input())
    c.append(a//25)
    a=a-(a//25*25)
    c.append(a//10)
    a=a-(a//10*10)
    c.append(a//5)
    a=a-(a//5*5)
    c.append(a//1)
    print(*c)
    c.clear()