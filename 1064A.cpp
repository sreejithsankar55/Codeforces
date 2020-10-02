#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
using namespace std;

int main()
{
	ll a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[2]<a[1]+a[0])
		cout<<0;
	else
		cout<<a[2]-(a[1]+a[0])+1;
	

	return 0;
}
