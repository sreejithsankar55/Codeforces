#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n,maxim = 0,m;
    cin >> n >> m;
    string t;
    cin >> t;
    set < char > s;
    for ( ll i = 0 ; i < n ; i++ )
    {
        s.insert(t[i]);
    }
    if(s.size()==1)
    {
        cout << t;
        m -= 1;
        while(m--)
        {
            cout << t[0];
        }
        return 0;
    }
    else
    {
        ll c = 1;
        for ( ll i = n-1 ; i >= 1 ; i-- )
        {
            if(t.substr(0,i)==t.substr(c,i))//s.substr(0,2) means it takes 2 elements from 0 i.e. index [0,1]
            {
                if(i > maxim)
                    maxim = i;
            }
            c++;

        }
    }
    if(maxim == 0)
    {
        while(m--)
        {
            cout << t;
        }
    }
    else
    {
        cout << t;
        m--;
        while(m--)
        {
            cout << t.substr(maxim);//this is equivalent to t.substr(maxim,n-maxim);
        }
    }
    return 0;
}
