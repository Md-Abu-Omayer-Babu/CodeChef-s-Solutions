// Problem link : https://www.codechef.com/practice/course/prefix-sums/PREFIXSUMS/problems/PREFPRO3 

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(auto &it : v){
	    cin >> it;
	}
	
	vector<int> presum(n,0);
	presum[0] = v[0];
    for(int i = 1; i < n; i++){
        presum[i] = presum[i - 1] + v[i];
    }
	
	int cnt = 0;
	
	for(int i = 0; i < n; i++){
	    for(int j = i; j < n; j++){
	        if(i == j){
	            if(v[i] == k) cnt++;
	        }else{
	            if(i == 0){
	                if(presum[j] == k){
	                    cnt++;
	                }
	            }else if(presum[j] - presum[i - 1] == k){
	                cnt++;
	            }
	        }
	    }
	}
	
	cout << cnt << endl;

}