n=[]
for i in range (5):
	n.append(list(input().split()))
for i in range(5):
    for j in range(5):
        if n[i][j]=='1':
            print(abs(2-i)+abs(2-j))
            exit()