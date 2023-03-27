arr=[int(input()) for _ in range(28)]
b=[]
for i in range(1,31):
    if arr.count(i)==0:
        b.append(i)
b.sort()
for i in b:
    print(i)