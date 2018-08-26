#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss second
#define ff first
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"Yes";
        return 0;
    }
    string s;
    cin>>s;
    map < char, ll > ma;
    for ( ll i = 0 ; i < n ; i++)
    {
        ma[s[i]]++;
        if(ma[s[i]]>=2)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
