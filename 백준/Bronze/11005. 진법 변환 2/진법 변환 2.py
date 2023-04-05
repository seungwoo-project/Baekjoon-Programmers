n,b=map(int,input().split())
system='0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
answer=''

while n :
    answer+=system[n%b]
    n=n//b
print(answer[::-1])