#!/usr/bin/python3

num=int(input("Enter a number"))
f=1
if num==0:
    print("Factorial is ",f)
for i in range(1,num+1):
    f=f*i
print("Factorial is ",f)
