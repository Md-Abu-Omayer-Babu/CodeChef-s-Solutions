// Problem link : https://www.codechef.com/practice/course/prefix-sums/PREFIXSUMS/problems/PREFPRO2

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it : v){
	    cin >> it;
	}
	
	vector<int> presum(n,0);
	presum[0] = v[0];
	for(int i = 0; i < n; i++){
	    presum[i + 1] = presum[i] + v[i + 1];
	}
	
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    x--;
	    y--;
	    
	    if(x == 0){
	        cout << presum[y] << endl;
	    }else{
	        cout << abs(presum[y] - presum[x - 1]) << endl;
	    }
	    
	}

}