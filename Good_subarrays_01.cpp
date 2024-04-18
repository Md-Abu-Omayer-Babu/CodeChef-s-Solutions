// Problem link : https://www.codechef.com/practice/course/prefix-sums/PREFIXSUMS/problems/PREFPRO3

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int cnt = 0, sum = 0, left = 0;
    for (int right = 0; right < n; ++right) {
        sum += v[right];
        while (sum > k && left <= right) {
            sum -= v[left++];
        }
        if (sum == k) {
            ++cnt;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
