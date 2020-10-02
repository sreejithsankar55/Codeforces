/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	pi 	3.141592653589793
#define 	ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
	ios;
	ll n,mi=0;
	cin>>n;
	while(n--)
	{
		ll x,y;
		cin>>x>>y;
		if((x+y)>mi)
			mi=x+y;
	}
	cout<<mi;
	
	return 0;
}
