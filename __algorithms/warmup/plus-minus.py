def list_ip():
    return list(map(int,input().strip().split(' ')))
n=int(input())
a=list_ip()
neg=float(0.0)
zero=float(0.0)
pos=float(0.0)
for i in range(n):
	if a[i]<0:
		neg+=1
	elif a[i]>0:
		pos+=1
	else: 
		zero+=1
print('%f' % (pos/n,))
print('%f' % (neg/n,))
print('%f' % (zero/n,))
