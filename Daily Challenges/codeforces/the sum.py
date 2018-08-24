n=int(input())
sum=0
fib=0
a=0
b=1
for i in range(n):
	fib=a+b
	b=a
	a=fib
	sum+=fib
print(sum)