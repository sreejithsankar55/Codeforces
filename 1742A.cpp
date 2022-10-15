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
    	int a,b,c;
    	cin>>a>>b>>c;
    	if(a+b == c || a+c == b ||b+c == a)
    		cout<<"YES";
    	else
    		cout<<"NO";
     	cout<<endl;
    }
    return 0;
}
