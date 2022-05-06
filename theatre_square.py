n,m,a=map(int,input().split())
l=n//a
if (n%a!=0):
    l+=1
b=m//a
if (m%a!=0):
    b+=1
print(l*b)