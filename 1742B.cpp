#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
    	ll n,f=0;
    	cin>>n;
    	vector < ll >v(n);
    	for(ll i = 0 ; i < n ; i++) {
    		cin>>v[i];
    	}
    	sort(v.begin(),v.end());
    	for(ll i = 1 ; i < n ; i++) {
    		if(v[i] <= v[i-1]) {
    			f=1;
    			break;
    		}
    	}
    	if(f)
    		cout<<"NO";
    	else
    		cout<<"YES";
     	cout<<endl;
    }
    return 0;
}
