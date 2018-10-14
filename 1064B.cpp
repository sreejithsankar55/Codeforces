#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
using namespace std;

int main()
{
	
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll b;
		cin>>b;
		ll p =  __builtin_popcount (b);
		p=pow(2,p);
		cout<<p<<endl;
	}
	

	return 0;
}
