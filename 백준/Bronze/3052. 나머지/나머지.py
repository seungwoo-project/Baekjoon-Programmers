lst=[int(input()) for _ in range(10)]
for i in range(10):
    lst[i]%=42
a=set(lst)
print(len(a))