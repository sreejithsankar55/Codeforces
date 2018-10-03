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
	
	ll n,sum=0,k,c=0,p=0;
	cin>>n;
	string ss;
	cin>>ss;
	string s;
	loop(i,0,n-1)
	{
		if(ss[i]=='0')
			p++;
		else
			s+=ss[i];
	}
	if(p==n)
		return cout<<"YES",0;
	n=s.size();
	k=(n/2)+1;
	loop(i,1,9*k)
	{
		c=0;
		sum=0;
		loop(j,0,n-1)
		{
			sum+=(s[j]-'0');
			if(sum==i)
			{
				sum=0;
				c++;
				if(j==n-1&&c>1)
					return cout<<"YES",0;
			}
		}
	}

	return	cout<<"NO",0;
}
