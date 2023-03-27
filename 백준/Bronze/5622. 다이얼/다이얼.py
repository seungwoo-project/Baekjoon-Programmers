dial=['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
k=input()
sum=0
for j in k:
    for i in dial:
        if j in i:
            sum+=dial.index(i)+3
            
print(sum)