#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define w int x; cin>>x; while(x--)
#define pb push_back
#define M 1000000007



int main() {
    fio
     w{
         ll n;
         cin>>n;
        ll count0=0;
        ll count1=0;
         for(int i=0;i<n;i++){
             int a;
             cin>>a;
             if(a==0){
                 count0+=1;
             }
             else if(a==1){
                 count1+=1;
             }
         }
         
         ll p = pow(2,count0);
         
         cout<<count1*p<<'\n';
         
     }
	return 0;
}
