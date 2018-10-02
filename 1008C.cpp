/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair

using namespace std;

int main()
{	
    long long n,b,j=0,i=0,c=0;
    cin>>n;
    vector < long long > v,v1;
	for ( long long k = 0 ; k < n ; k++ )
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
	cout<<c;
	
		return 0;
}  
