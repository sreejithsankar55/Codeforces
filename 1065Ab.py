http://codeforces.com/contest/1065/problem/A

t=int(input())
while(t--):
	s,a,b,c=map(int,(input().split()))
	ru=a*c
	p=(s//ru)*a
	res=(s//ru)*b
	res+=p
	res+=((s%ru)/c)
	print(res)
