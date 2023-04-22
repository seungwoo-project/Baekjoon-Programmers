a,b,c = map(int,input().split())

if not a+b>c:
    c=a+b-1

if not b+c>a:
    a=b+c-1

if not c+a>b:
    b=a+c-1

print(a+b+c)