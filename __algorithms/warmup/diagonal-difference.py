def list_ip():
	return list(map(int,input().strip().split(' ')))
n=int(input())
a=[]
for i in range(n):
	a.append(list_ip())
d1=0
d2=0
for i in range(n):
	for j in range(n):
		if(i+j==n-1):
			d2+=a[i][j]	
		if(i==j):
			d1+=a[i][j]
print(abs(d1-d2))
