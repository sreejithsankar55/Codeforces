/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod 1000000007
#define 	pi 	3.141592653589793

using namespace std;

int main()
{	
    ll n,b,j=0,i=0,c=0;
    cin>>n;
    vector < ll > v,v1;
	for ( ll k = 0 ; k < n ; k++ )
	{	
		cin>>b;
		v.pb(b);
	}
	sort(v.begin(),v.end());
	v1=v;
	while((j!=n)&&(i!=n))
	{
		if(v[i]<v1[j])
		{
			c++;
			i++;	
		}
		j++;
	}
	cout<<c;
	
		return 0;
}  
