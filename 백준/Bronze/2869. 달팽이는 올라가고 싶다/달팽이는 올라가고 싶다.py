from math import ceil
a,b,v=map(int,input().split())
day=(v-b)/(a-b)
print(ceil(day))