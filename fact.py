def fact(n):
	if ((n==1) or( n==0)):
		  return 1
	else:
		n*fact(n-1)
i=1
fil=open("file.txt",'w')
while i<=1000000:
	fil.write(str(fact(n))
	i=i+1

fil.close()
