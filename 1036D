#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define MOD 1000000007
#define loop(i,s,e) for(ll i=s;i<=e;i++)
#define loopr(i,s,e) for(ll i=s;i>=e;i--)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
	
	ios;
	ll n,m,b,suma=0,sumb=0,c=0;
	cin>>n;
	vector < ll > v,w;
	loop(i,0,n-1)
	{
		cin>>b;
		v.pb(b);
	}
	cin>>m;
	loop(i,0,m-1)
	{
		cin>>b;
		w.pb(b);
	}
	ll i=0,j=0;
	suma+=v[0];
	sumb+=w[0];
	i++,j++;
	while((i<n)||(j<m))
	{
		if(suma==sumb)
		{	
			c++;
			if(i<n&&j<m)
			{
				suma+=v[i];
				sumb+=w[j];
				i++,j++;
			}
			else
				return cout<<"-1",0;
		}
		if(suma>sumb)
		{
			if(j<m)
			{
				sumb+=w[j];
				j++;
			}
			else
				return cout<<"-1",0;
		}
		if(sumb>suma)
		{
			if(i<n)
			{
				suma+=v[i];
				i++;
			}
			else
				return cout<<"-1",0;
		}
		
	}
	//cout<<suma<<" "<<sumb<<endl;
	if(suma==sumb)
		c++;
	cout<<(c?c:-1);
	return 0;
}
