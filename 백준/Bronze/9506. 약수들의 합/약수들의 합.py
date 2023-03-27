a=[]
while(1):
    n=int(input())
    if(n==-1):
        break
    for i in range(1,n):
        if n%i==0:
            a.append(i)

    if sum(a)==n:
        print(n,'= ',end='')
        print(*a,sep=' + ')
    else:
        print(n,'is NOT perfect.')
    a.clear()