/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod 1000000007
#define 	pi 	3.141592653589793
using namespace std;

int main()
{
    ll n,m,s=0,b,act;
    cin>>n>>m;
    vector < ll > v(n+1),v1(n+1);
    vector < ll >::iterator lower;
    v1[0]=0;
    v[0]=0;
    for ( ll i = 0 ; i < n ; i++)
    {
        cin>>v[i+1];
        s+=v[i+1];
        v1[i+1]=s;
    }
    for ( ll i = 0 ; i < m ; i++)
    {
        cin>>b;
        lower = lower_bound(v1.begin(),v1.end(),b);
        act = (lower- v1.begin());

        cout<<act<<" "<<b-v1[act-1]<<endl;
    }
    return 0;
}
