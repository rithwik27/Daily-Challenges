n=int(input());a=input()
if n>26:
	print(-1)
else:
	c=0
	for i in range(97,123):
		s=a.count(chr(i))
		if s>1:
			c+=s-1
	print (c)