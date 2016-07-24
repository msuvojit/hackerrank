import sys


n = int(input().strip())
for a0 in range(n):
	s = input().strip()
	p = ""
	count = 0
	for i in s:
		if i not in p:
			p = p + i
			count = count + 1
	print(count)
