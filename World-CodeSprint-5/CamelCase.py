import sys

s = input().strip()
word=1
for i in s:
	if(ord(i)>=65 and ord(i)<=91):
		word = word + 1

print(word)
