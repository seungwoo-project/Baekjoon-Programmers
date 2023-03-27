a=[input() for _ in range(5)]
for j in range(15):
    for i in range(5):
        if j < len(a[i]): # a[0] = 6, a[1] = 4
            print(a[i][j], end='')
