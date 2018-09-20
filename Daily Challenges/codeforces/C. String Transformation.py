s=list(input())
if(len(s)<26):
	print(-1)
	exit()
c=0
for i in range(len(s)):
	if(ord(s[i])<=97+c):
		s[i]=chr(97+c)
		c+=1
	if c==26:
		print(''.join(s))	
		exit()
print(-1)