/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod     1000000007
#define 	pi 	3.141592653589793

using namespace std;

int main()
{
    ll n,p,maxi=1,c=0;
    cin>>n;
    ll b;
    cin>>b;
    p=b;
    c++;
    vector < ll > v(n+1);
    v.pb(b);
    for ( ll i = 1 ; i < n ; i++ )
    {
        cin>>b;
        v[i]=b;
        if(b>(2*p))
        {
            c=1;
        }
        else
            c++;
        p=b;

        if(c>maxi)
            maxi=c;
    }
    cout<<maxi;



    return 0;

}
