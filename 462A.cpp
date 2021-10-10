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
    ll n,c=0;
    cin>>n;
    vector < vector < pair < char , ll > > > v;
    for(ll i = 0  ; i < n ; i++)
    {
        string s;
        cin>>s;
        vector < pair < char , ll > > temp;
        for ( ll j = 0 ; j < n ; j++ )
        {
            temp.pb(mp(s[j],0));
        }
        v.pb(temp);
    }

    for ( ll i = 0 ; i < n ; i++ )
    {
        for ( ll j = 1 ; j < n ; j++)
        {
            if(v[i][j-1].ff == 'o' )
                v[i][j].ss++;
        }
    }
    for ( ll i = 0 ; i < n ; i++ )
    {
        for ( ll j = 0 ; j < n-1 ; j++)
        {
            if(v[i][j+1].ff == 'o' )
                v[i][j].ss++;
        }
    }
    for ( ll i = 0 ; i < n ; i++ )
    {
        for ( ll j = 1 ; j < n ; j++)
        {
            if(v[j-1][i].ff == 'o' )
                v[j][i].ss++;
        }
    }
    for ( ll i = 0 ; i < n ; i++ )
    {
        for ( ll j = 0 ; j < n-1 ; j++)
        {
            if(v[j+1][i].ff == 'o' )
                v[j][i].ss++;
        }
    }
    for ( ll i = 0 ; i < n ; i++ )
    {
        for ( ll j = 0 ; j < n ; j++)
        {
            if(v[i][j].ss%2==0)
                c++;
        }
    }
    if(c==(n*n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
