n=int(input())
input_str=list(map(int,input().split()))
print(round(sum(input_str)/n,1))
print(n)
if(n%2!=0):
	print(input_str[int(n/2)])
else:
	print((input_str[int(n/2)-1]+input_str[int((n+1)/2)-1])/2)
