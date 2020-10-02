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
ll sum(ll s,ll ss)
{
	ll r,sum1=0,sum2=0;
	while(s!=0)
	{
		r=s%10;
		sum1+=r;
		s/=10;
	}
	
	while(ss!=0)
	{
		r=ss%10;
		sum2+=r;
		ss/=10;
	}
	sum1+=sum2;

	return sum1;
}

  
int main(){
	
	ll n,c,op=1,s;
	cin>>n;
	c=n;
	if(n<=10)
		return cout<<n,0;
	else
		s  = countd(c);
	loop(i,0,s-2)
		op=(op*10);
	
	c/=op;
	c--;
	loop(i,0,s-2)
		c=(c*10)+9;
	
	cout<<sum(n-c,c);
	
	return 0;
}
