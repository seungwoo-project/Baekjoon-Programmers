a,b,c = input().split()
a=int(a)
b=int(b)
c=int(c)
if a==b==c:
    print(10000+a*1000)
elif a==b or b==c or c==a:
    if a==b:
        print(1000+a*100)
    elif b==c:
        print(1000+b*100)
    elif c==a:
        print(1000+a*100)
else:
    print(max(a,b,c)*100)