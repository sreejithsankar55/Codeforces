/* (^-^)Sree_jith__S(^+^)*/

#include <bits/stdc++.h>
using namespace std;
#define pb 	push_back
#define pob pop_back
#define pof pop_front
#define pf  push_front
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
#define ins insert
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int check(ll m)
{
	ll f=0;
	while(m)
	{
		if(m%10==7)
			f=1;
		m/=10;
	}
	return f;
}
int main()
{
	ios;
	ll x,c=0,hr,mi;
	cin>>x;
	cin>>hr>>mi;
	while(true)
	{
		if(check(hr)||check(mi))
			return cout<<c,0;
		
		if(mi-x<0 or mi-x==-60)
		{
			mi=60+(mi-x);
			if(hr==0)
				hr=23;
			else
				hr--;
		}
		else if(mi==x)
			mi=0;
		else 
			mi=mi-x;
		c++;
	}
    return 0;
}
