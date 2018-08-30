s2=input();s1=input()
a=ord(s1[0])-96;b=int(s1[1])
x=ord(s2[0])-96;y=int(s2[1])
if abs(x-a)<abs(y-b):
	s=abs(y-b)
	print(abs(y-b))	
else:
	s=abs(x-a)
	print(abs(x-a))
for i in range(s):
	if x>a and y>b:
		print("LD")
		a+=1;b+=1
	elif x>a and y<b:
		print("LU")
		a+=1;b-=1
	elif x<a and y>b:
		print("RD")
		a-=1;b+=1
	elif x<a and y<b:
		print("RU")
		a-=1;b-=1
	elif x>a:
		print("L")
		a+=1
	elif x<a:
		print("R")
		a-=1
	elif y>b:
		print("D")
		b+=1
	elif y<b:
		print("U")
		b-=1				 