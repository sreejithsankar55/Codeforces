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

int main()
{
    ll n,m,min,max,c,count=0,d;
    vector < ll > v;
    //v.pb(-1);
    for(ll i = 2 ; i <= 100000; i++)
    {
        c=(i*(i-1))/2;
        v.pb(c);
        //cout<<c<<" ";

    }
    cin>>n>>m;
    if(m == 0)
    {
        cout<<n<<" "<<n;
        return 0;
    }

    c = (n*(n-1));
    c /= 2;
    if(m >= c)
        min = 0;
    else
        min = n - (2*m);

    vector < ll >::iterator upper,lower;

    lower = lower_bound (v.begin(), v.end(), m);
    upper = upper_bound (v.begin(), v.end(), m);
    ll t = upper-v.begin();
    d=lower-v.begin();
    if(t!=d)
    {
        n-=(d + 2);
    }
    else
        n-=(t+2);
    //cerr<<t<<" "<<d<<endl;
    if(n>0)
        max = n;
    if(max<0)
        max = 0;
    if(min<0)
        min = 0;
    cout<<min<<" "<<max;
    return 0;
}
