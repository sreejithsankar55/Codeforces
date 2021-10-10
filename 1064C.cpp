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
	ll n;
	cin>>n;
	string s;
	cin>>s;
	map < char , ll > ma;
	for(ll i = 0 ; i < n;i++)
	{
		ma[s[i]]++;
	}
	for(auto it=ma.begin();it!=ma.end();it++)
	{
		ll c=it->ss;
		while(c--)
		{
			cout<<it->ff;
		}
	}
	return 0;
}
