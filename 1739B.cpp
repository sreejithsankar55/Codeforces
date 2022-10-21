#include <bits/stdc++.h>
using namespace std;

int main() {
	    #ifndef ONLINE_JUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
	#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) {
    	int n,flag=0;
    	cin>>n;
    	vector < int > v(n),d(n);
    	for(int i = 0 ; i < n ; i++)
    		cin>>v[i];
    	d[0] = v[0];
    	for(int i = 1 ; i < n ; i++) {
    		int s = d[i-1]-v[i];
    		int y = d[i-1]+v[i];
    		if(s>=0 and y>=0 and s!=y) {
    			flag=1;
    			break;
    		}
    		else{
    			if(s>0)
    				d[i] = s;
    			else
    				d[i] = y;
    		}
    		//<<d[i]<<" ";
    	}
    	if(flag)
    		cout<<-1<<endl;
    	else {
    		for(int i = 0 ; i < n ; i++) {
    			cout<<d[i]<<" ";
    		}
    		cout<<endl;
    	}
    }
    return 0;
}
