#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
#define ins insert
#define cf cout.flush()
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
#define countd(n) (log10(n)+1)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
bool vis[5052]={0};
ll t,n;
vector < string > v;
vector < pair < ll,ll > > bfs(ll dr, ll dc)
{
	vector < pair < ll,ll > >v1;
	queue < pair < ll, ll > > dq;
	v1.pb(mp(dr,dc));
	dq.push(mp(dr,dc));
	t=(dr)*100;
	t+=dc;
	vis[t]=1;
	while(!dq.empty())
	{
		pair < ll, ll > p;
		p=dq.front();
		dq.pop();
		if(p.ff+1 <= n)
		{
			t=(p.ff+1)*100;
			t+=p.ss;
			if(v[p.ff+1][p.ss]!='1' and vis[t]==0){
			vis[t]=1;
			v1.pb(mp(p.ff+1,p.ss));
			dq.push(mp(p.ff+1,p.ss));
			}
		}
		if(p.ff-1 >= 1)
		{
			t=(p.ff-1)*100;
			t+=p.ss;
			if(v[p.ff-1][p.ss]!='1' and vis[t]==0){	
			vis[t]=1;		
			v1.pb(mp(p.ff-1,p.ss));
			dq.push(mp(p.ff-1,p.ss));
			}
		}
		if(p.ss+1 <= n)
		{
			t=(p.ff)*100;
			t+=p.ss+1;
			if(v[p.ff][p.ss+1]!='1' and vis[t]==0){	
			vis[t]=1;			
			v1.pb(mp(p.ff,p.ss+1));
			dq.push(mp(p.ff,p.ss+1));
			}
		}
		if(p.ss-1 >= 1)
		{
			t=(p.ff)*100;
			t+=p.ss-1;
			if(v[p.ff][p.ss-1]!='1' and vis[t]==0){	
			vis[t]=1;			
			v1.pb(mp(p.ff,p.ss-1));
			dq.push(mp(p.ff,p.ss-1));
			}
		}
		
	}	
	
	return v1;
	
}
int main() {

	ll c,mini=INT_MAX;

	cin>>n;
	string s;
	
	vector < pair < ll,ll > > v1,v2;
	ll sr,sc,dr,dc;
	cin>>sr>>sc;
	cin>>dr>>dc;
	
	v.pb("111111");
	for(ll i = 0 ; i < n ; i++ )
	{
		cin>>s;
		v.pb('1'+s);
	}

	v1=bfs(dr,dc);
	v2=bfs(sr,sc);

	for(ll i = 0 ; i < (ll)v1.size() ; i++ )
	{
		for(ll j = 0 ; j < (ll)v2.size() ; j++ )
		{
			c=( (v1[i].ff-v2[j].ff)*(v1[i].ff-v2[j].ff) )+( (v1[i].ss-v2[j].ss)*(v1[i].ss-v2[j].ss) );
			if(c<mini)
				mini=c;
		}
	}
	cout<<mini;
	
	return 0;
}
