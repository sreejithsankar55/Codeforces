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
    ll n,c = 0, d = 0;
    cin >> n;
    char s;

    for ( ll i = 0 ; i < n ; i++ )
    {
        cin >> s;
        if(s == 'x')
        {
            c++;
            if(c >= 3)
            {
                d++;
            }
        }
        else
            c = 0;
    }
    cout << d;
    return 0;

}
