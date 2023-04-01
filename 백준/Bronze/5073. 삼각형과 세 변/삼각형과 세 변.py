while(1):
    a,b,c = map(int,input().split())
    if a==b==c==0:
        break
    if max(a,b,c) < a+b+c-max(a,b,c): # 삼각형 조건 만족?
        if a==b==c:
            print('Equilateral')
            
        elif a==b or b==c or c==a:
            print('Isosceles')
            
        else:
            print('Scalene')
            
    else:
        print('Invalid')
        
