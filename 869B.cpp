/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	pi 	3.141592653589793
#define 	ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    ll a,b,c=1;
    cin>>a>>b;

    for(ll i = b ; i > a ; i--)
    {
        c*=(i%10);
        c%=10;
        if(c==0)
           return cout<<c,0;
    }

    cout<<c;


    return 0;
}
