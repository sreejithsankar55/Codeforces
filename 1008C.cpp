/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define         ll      long long

using namespace std;

int main()
{	
    ll n,b,j=0,i=0,c=0;
    cin>>n;
    vector < ll > v,v1;
	for ( ll k = 0 ; k < n ; k++ )
	{	
		cin>>b;
		v.push_back(b);
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
	cout<<c<<endl;
	
		return 0;
}  
