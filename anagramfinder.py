from sys import argv
#first,second=argv
second=raw_input("enter a word \n")
print "searching for the actual word:",second,"\n"
uniq=list(second)
uniq.sort()
wlist=open('wordlist.txt')
for word in wlist:
	if(len(word.strip())==len(uniq)):
		check=list(word.strip())
		check.sort()
		if check==uniq:
			print "anagram found" ,word
			pass
		pass
	pass
