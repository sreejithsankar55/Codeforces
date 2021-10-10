/* (: Sreejith Codes :) */
//d and c
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
    ll n,k,su=0;
    cin>>n>>k;
    string s;
    cin>>s;
    vector < ll > v,v1;
    map < char , ll > ma;
    map < ll, ll > d;
    for ( ll i = 0 ; i <= n ; i++ )
        ma[s[i]]++;
    for(auto it = ma.begin() ; it!=ma.end() ; it++ )
    {
        v.pb(it->ss);
    }
    sort(v.begin(),v.end(),greater < ll >());
    v1=v;
    for( ll i = 0 ; i < v.size() ; i++)
    {
        ll c = v[i];
        while(k>0&&v[i]!=0)
        {
            for(ll j=1; j <= c ; j++)
            {
                d[i]++;
                v[i]--;
                k--;
                if(k==0)
                    break;
            }
        }
        if(k==0)
            break;
    }
    for(auto it=d.begin() ; it!=d.end() ; it++)
    {
        su += it->ss * it->ss;
    }
    cout<<su;
    return 0;
}
