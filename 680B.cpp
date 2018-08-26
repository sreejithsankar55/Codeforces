#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss second
#define ff first
using namespace std;
int main()
{
    ll n,m,b,ex,count=0;
    cin>>n>>m;
    if(n==1)
    {
        if(m==1)
        {
            cin>>b;
            if(b==1)
                cout<<1;
            else
                cout<<0;
        }
        else
            cout<<0;
        return 0;
    }
    vector < ll > v,v1;
    for ( ll i = 0 ; i < m-1 ; i++)
    {
        cin>>b;
        v.pb(b);
    }
    if(n!=1)
        cin>>ex;
    for ( ll i = m ; i < n ; i++)
    {
        cin>>b;
        v1.pb(b);
    }
    if(ex==1)
        count++;
    if(v.size()<v1.size())
    {
        reverse(v.begin(),v.end());
        for(ll i = 0 ; i < v.size() ; i++)
        {
            if((v[i]==v1[i])&&(v[i]==1))
                count+=2;
        }
        ll j=v.size();
        while(j!=v1.size())
        {
            if(v1[j]==1)
                count++;
            j++;
        }
    }
    else
    {
        reverse(v.begin(),v.end());
        for(ll i = 0 ; i < v1.size() ; i++)
        {
            if((v[i]==v1[i])&&(v[i]==1))
                count+=2;
        }
        ll j=v1.size();
        while(j!=v.size())
        {
            if(v[j]==1)
                count++;
            j++;
        }
    }
    cout<<count;
    return 0;
}
