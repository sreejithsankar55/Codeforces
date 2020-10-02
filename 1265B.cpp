#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define inf 1e8
#define all(v) v.begin(),v.end()
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
void pv(vector<auto> &v,ll start = 0, ll end = 0){ 
	if(end != v.size() - 1) end = v.size() - 1;
	for(ll i = start; i <= end; i++) cout << v[i] << " "; cout << endl;
}
void inline pp(pair<auto, auto> p) { cout << p.ff << " " << p.ss << endl; }
void inline in(vector<auto> &v, ll n) { v.resize(n); for(ll i = 0; i < n; i++) cin >> v[i]; }
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
 
int main()
{
	ios;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,b,j,i,sa;
		vector < ll > v;
		//v.pb(INT_MAX);
		cin>>n;
		priority_queue <ll > pq; 
		for(i = 0 ; i < n ; i++)
		{
			cin>>b;
			if(b==1)
				sa = i;
			v.pb(b);
		}
		//v.pb(INT_MIN);
		i = sa-1;
		j = sa+1;
		pq.push(v[sa]);
		cout<<1;
		if(n==1)
		{
			cout<<endl;
			continue;
		}
	
		while(1)
		{
			if(i==-1 || j==n)
					break;
				//db(v[i],v[j]);
				if(v[i] < v[j])
				{
					pq.push(v[i]);
					if(i!=-1)
					i--;
					else
						break;
				}
				else
				{
					pq.push(v[j]);
					if(j!=n)
					j++;
					else
					break;
				}
				//db((ll)pq.size(),(ll)pq.top());
				if((ll)pq.size() == (ll)pq.top())
					cout<<1;
				else
					cout<<0;
				
				
		}
		//db(i,j);
		while(i!=-1)
		{
			//db("ins",v[i],v[j]);
			pq.push(v[i]);
			//db((ll)pq.size(),(ll)pq.top());
			if((ll)pq.size() == (ll)pq.top())
					cout<<1;
				else
					cout<<0;
			i--;
		}
		while(j!=n)
		{
			//db("on",v[i],v[j]);
			pq.push(v[j]);
			//db((ll)pq.size(),(ll)pq.top());
			if((ll)pq.size() == (ll)pq.top())
					cout<<1;
				else
					cout<<0;
			j++;
		}
			
		cout<<endl;
	}
	return 0;
}
 
