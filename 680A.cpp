#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss second
#define ff first
using namespace std;
int main()
{
    map < ll,ll > ma;
    ll b,s=0,max=0;
    for(ll i = 0 ; i < 5 ; i++)
    {
        cin>>b;
        s+=b;
        ma[b]++;
    }
    map < ll , ll >::iterator it;
    for(it=ma.begin(); it!=ma.end(); it++)
    {
        if(it->ss>=2)
        {
            if(it->ss>=3)
            {
                if((it->ff)*3>max)
                    max=(it->ff)*3;
            }
            else
            {
                if((it->ff)*(it->ss)>max)
                    max=(it->ff)*(it->ss);
            }
        }
    }
    cout<<s-max;
    return 0;
}
