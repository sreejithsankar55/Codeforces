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
	ll n,m,b;
	cin>>n>>m;
	deque < pair < ll , ll > > q;
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>b;
		q.pb(mp(b,i+1));
	}
	while(!q.empty())
	{
		q.front().ff=q.front().ff-m;
		if(q.front().ff>0)
			q.push_back(q.front());
		b=q.front().ss;
		q.pop_front();
	}
	cout<<b;
	
	return 0;
}
