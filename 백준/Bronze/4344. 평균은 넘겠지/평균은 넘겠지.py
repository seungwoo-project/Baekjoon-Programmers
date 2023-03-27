c=int(input())

for _ in range(c):
    cnt=0
    n=list(map(int,input().split()))
    avg=sum(n[1:])/n[0]
    for i in range(1,len(n)):
        if avg <n[i]:
            cnt+=1
    rate=cnt/n[0]*100
    print('%.3f%%' %rate)

