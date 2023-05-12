n=int(input()) # n의 자리수에따라 1000 
lst=[]
for i in range(n):
    sum=0
    a=str(i)
    count=len(str(i))
    for k in range(count):
        sum=sum+int(a[k])
    if(int(a)+sum==n):
        lst.append(i)
        break
            
if not lst:
    print(0)
else:
    print(min(lst))