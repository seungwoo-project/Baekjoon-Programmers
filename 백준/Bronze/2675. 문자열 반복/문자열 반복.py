for _ in range(int(input())):
    r,s=input().split()
    r=int(r)
    for i in range(len(s)):
        print(s[i]*r,end='')
    print()
