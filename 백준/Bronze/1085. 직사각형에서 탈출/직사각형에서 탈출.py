x,y,w,h=map(int,input().split())
a=abs(x-w)
b=abs(y-h)
result=0
result2=0
if a>x:
    result=x
else:
    result=a

if b>y:
    result2=y
else:
    result2=b

if result>result2:
    print(result2)
else:
    print(result)
