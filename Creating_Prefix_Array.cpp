// Problem link : https://www.codechef.com/practice/course/prefix-sums/PREFIXSUMS/problems/PREFPRO1

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(auto &it : v){
	    cin >> it;
	}
	
	int presum = 0;

	for(auto &it : v){
	    presum += it;
	    cout << presum << " ";
	}
	
	cout << endl;
}