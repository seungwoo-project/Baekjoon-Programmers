s=input()
try:
    for i in range(97,123):
        print(s.find(chr(i)),end=' ')
except:
    print(-1,end=' ')