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
ll colm(string te)
{
	ll m=0,si=(ll)te.size();
	for(ll i = 0 ; i < si ; i++ )
	{
		m*=26;
		m+=(te[i]-'A'+1);
	}
	return m;
}
int main() {

	ios;
	ll t;
	cin>>t;
	while(t--)
	{
		string s,te="";
		ll f=0,n=1,m=1;
		cin>>s;
		if(s[0]=='R' and isdigit(s[1]) and (s.find('C')!=string::npos))
		{
			string tt="";
			for(ll i = 1 ; i < (ll)s.size() ; i++ )
			{
				if(f==1)
				{
					n=(n*10)+(s[i]-48);
					m*=10;
				}
				else if(s[i]=='C')
					f=1;
				else
					te+=s[i];
			}
			n-=m;
			while(n!=0)
			{
				f=n%26;
				if(f==0)
					f+=26;
				tt+=('A'+f-1);
				n-=f;
				n/=26;
				
			}
			reverse(tt.begin(),tt.end());
			cout<<tt<<te;
		}
		else
		{
			for(ll i = 0 ; i < (ll)s.size() ; i++ )
			{
				if(isalpha(s[i]))
					te+=s[i];
				else
				{
					n=(n*10)+(s[i]-48);
					m*=10;
				}
			}
			n-=m;
			cout<<"R"<<n<<"C"<<colm(te);
		}
	
		cout<<endl;
	}
  return 0;
}
