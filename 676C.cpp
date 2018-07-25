/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 		long long
#define 	ld 		long double
#define 	pb 		push_back
#define 	ff 		first
#define 	ss 		second
#define 	mp 		make_pair
#define 	mod 	    1000000007
#define 	pi 		3.141592653589793

using namespace std;

int main()
{
    ll n,m,c=0,maxi=0;
    cin>>n>>m;
    string s;
    cin>>s;
    ll v=m;
    queue < char > q;
    for ( ll i = 0 ; i < n ; i++ )
    {

        if(s[i]=='a')
            q.push(s[i]);
        else
        {
            m--;
            q.push(s[i]);
            if(m==-1)
            {
                c=q.size()-1;
                // cout<<q.size()<<endl;
                if(c>maxi)
                    maxi=c;
                while(!q.empty())
                {
                    if(q.front()=='a')
                        q.pop();
                    else
                    {
                        q.pop();
                        m++;
                        break;
                    }

                }

            }

        }
    }
    c=q.size();
    if(c>maxi)
        maxi=c;
    queue < char > q1;
    m=v;
    for ( ll i = 0 ; i < n ; i++ )
    {

        if(s[i]=='b')
            q1.push(s[i]);
        else
        {
            m--;
            q1.push(s[i]);
            if(m==-1)
            {
                c=q1.size()-1;
                if(c>maxi)
                    maxi=c;
                while(!q1.empty())
                {
                    if(q1.front()=='b')
                        q1.pop();
                    else
                    {
                        q1.pop();
                        m++;
                        break;
                    }

                }

            }

        }
    }
    c=q1.size();
    if(c>maxi)
        maxi=c;
    cout<<maxi<<endl;

    return 0;
}
