#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll cnt = 0,sswap = 0;
bool merge(vector < ll >&v , ll start, ll end, ll power) {
	ll end1 = power/2;
	if(v[start] > v[start+end1]) {
		sswap++;
		for(ll i = 0 ; i < (power/2) ; i++) {
			swap(v[start+i],v[i+start+end1]);
		}
	}
	for(ll i = start ; i < (end-1); i++ ) {
		if((v[i+1]-v[i]) != 1) {
			return false;
		}
	}
	return true;
}
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
	#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t=1;
    cin >> t;
    while (t--) {
    	ll n,b,power = 1, f=0;
    	cnt = 0;
    	sswap = 0;
    	cin>>n;
    	vector < ll > v;
    	for(ll i = 0 ; i < n ; i++) {
    		cin>>b;
    		v.push_back(b);
    	}
    	for(ll i = 1; i < 30 ; i++) {
    		power = power*2;
    		for(ll j = 0 ; j < n ; j++) {
    			cnt++;
    			
    			if(cnt == power) {
    				cnt=0;
    				
    				if(!merge(v,j-power+1,j, power)) {
    					f=1;
    					break;
    				}
    				
    			}
    		}
    		if(f==1)
    			break;
    	}
    	if(f==1)
    		cout<<-1;
    	else
    		cout<<sswap;
     	cout<<endl;
    }
    return 0;
}
