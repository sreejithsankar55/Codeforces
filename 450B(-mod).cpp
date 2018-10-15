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
	ll n,c[7];
	cin>>c[0]>>c[1]>>n;
	c[0] = ( c[0] % MOD + (c[0] % MOD < 0 ? MOD : 0) );
	c[1] = ( c[1] % MOD + (c[1] % MOD < 0 ? MOD : 0) );
	for(ll i = 2 ; i < 6 ; i++ )
	{
		c[i] = ( c[i-1] % MOD + (c[i-1] % MOD < 0 ? MOD : 0) ) - ( c[i-2] % MOD + (c[i-2] % MOD < 0 ? MOD : 0) );
		c[i] = c[i] % MOD + (c[i] % MOD < 0 ? MOD : 0);
	}
	
	cout<<c[(n-1)%6];
	
	return 0;
}
