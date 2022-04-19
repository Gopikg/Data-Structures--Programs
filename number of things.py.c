#!/usr/bin/python3

str=input("Enter a string :")
v=0
for char in str:
    if char in "aeiouAEIOU":
        v=v+1
print("Number of vowels is ",v) 
c=0
for char in str:
    if char in "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ":
        c=c+1
print("Number of consonants is ",c)
d=0
for char in str:
    if char in "1234567890":
        d=d+1
print("Number of digits is ",d)
s=0
for char in str:
    if char in "@#£_&-+()/?!;:'*,.~`|•√π÷×¶∆\}{=°^¢$¥€%©®™✓[]<>":
        s=s+1
print("Number of special characters is ",s)