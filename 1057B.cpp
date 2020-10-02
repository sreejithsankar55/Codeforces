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
	ll l,r,ce=0,co=0;
	cin>>l>>r;
	
	for(ll i = l ; i <= r ; i++)
	{
		if(i&1)
			co++;
		else 
			ce++;
		
	}
	if(co!=ce)
		cout<<"NO";
	else
	{
		cout<<"YES"<<endl;
		
		for(ll i = l ; i <  r ; i+=2)
		{
			cout<<i<<" "<<(i+1)<<endl;
		}
	} 
	
	return 0;
}
