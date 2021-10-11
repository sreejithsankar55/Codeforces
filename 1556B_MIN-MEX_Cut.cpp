#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    while (T-- > 0)
    {
        ll n,d;
        cin>>n>>d;
        ll new1 =n,rem1,ans=0,c=0;
        while(new1>0)
        {
            rem1=new1%10;
            new1=new1/10;
            c++;
            if(rem1==d)
            {
                new1=new1*pow(10,c)+(rem1+1)*pow(10,c-1);
                ans=new1-n;
                c=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}