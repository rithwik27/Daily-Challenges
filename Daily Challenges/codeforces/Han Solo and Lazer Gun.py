normal_set = set([])
n,x,y=map(int,input().split())
m=[]
for i in range(n):
	m.append(list(map(int,input().split())))
c=0	
for i in range(n):
	if m[i][0]-x==0:
		c=1
	else:
		s=(m[i][1]-y)/(m[i][0]-x)
		normal_set.add(s)
z=0

for i in normal_set:
	z+=1
print(z+c)