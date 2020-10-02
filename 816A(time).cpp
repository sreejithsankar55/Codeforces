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
#define countd(n)	((ll)log10(n))+1
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll go(ll h,ll m)
{
	if(countd(h)==2&&countd(m)==1)
	{
		swap(m,h);
	}
	ll k=0,rev=0;
	while(m!=0)
	{
		k=m%10;
		rev = (rev*10)+k;
		m/=10;
	}
	if(rev==h)
		return 1;
	else
		return 0;
	
}
int main()
{
	string s,h1,m1;
	cin>>s;
	ll h,m,f1=0;
	
	h1=s[0];
	h1+=s[1];
	m1=s[3];
	m1+=s[4];
	h=stoi(h1);
	m=stoi(m1);
	
	for(ll i = 0 ; i < 1200 ; i++)
	{
		ll c=go(h,m);
		//cout<<countd(h)<<" "<<countd(m)<<endl;
		if( (h == m) &&((countd(h)==1)&&(countd(m)==1)))
		{
			f1 =1;
		}
		if(((m+1)%60)==0)
		{
			h=(h+1)%24;
			m=0;
		}
		else
			m++;
		//cerr<<h<<" "<<m<<endl;
		if( f1 )
		{
			f1 = 0;
			continue;
		}
		 if(c==1)
			return cout<<i<<endl,0;
	}
	
	return 0;
}
