#!/bin/python3
a=list(map(int,input().strip().split(' ')))
b=list(map(int,input().strip().split(' ')))
alice=0
bob=0
for i in range(3):
    if(a[i]>b[i]):
        alice+=1
    elif(a[i]<b[i]):
        bob+=1
print(str(alice)+" "+str(bob))



