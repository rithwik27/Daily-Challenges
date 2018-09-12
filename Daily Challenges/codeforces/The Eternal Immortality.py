n,m=map(int,input().split())
if m-n>10:
	print(0)
else:
	s=1
	for i in range(n+1,m+1):
		s*=(i%10)
	print(s%10)
