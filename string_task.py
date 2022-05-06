s=input()
l=['a','e','i','o','u','y']
s=s.lower()
s1=""
for i in s:
    if i not in l:
        s1=s1+"."+i
print(s1)