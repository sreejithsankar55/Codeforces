#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define MOD 1000000007
#define loop(i,s,e) for(ll i=s;i<=e;i++)
#define loopr(i,s,e) for(ll i=s;i>=e;i--)
#define countd(n)	(log10(n)+1)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll s,a,b,c,res;
		cin>>s>>a>>b>>c;
		ll ru = a*c;
		ll p = (s/ru)*a;
		
		res = (s/ru) * b;
		res+=p;
		res+=((s%ru)/c);
		cout<<res<<"\n";	
	}
	return 0;
}
