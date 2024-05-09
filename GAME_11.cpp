// Problem link : https://www.codechef.com/problems/GAME_XI

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> v1(n), v2(m);

    for(auto &it : v1){
        cin >> it;
    }

    for(auto &it : v2){
        cin >> it;
    }

    if(n < 4 || m < 4 || (n + m) < 11){
        cout << -1 << endl;
        return;
    }

    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());

    int cnt = 0;
    
    for(int i = 0; i < 4; i++){
        cnt += v1[i];
    }

    for(int i = 0; i < 4; i++){
        cnt += v2[i];
    }

    vector<int> temp;

    for(int i = 4; i < n; i++){
        temp.push_back(v1[i]);
    }

    for(int i = 4; i < m; i++){
        temp.push_back(v2[i]);
    }

    sort(temp.begin(), temp.end(), greater<int>());

    for(int i = 0; i < 3; i++){
        cnt += temp[i];
    }

    cout << cnt << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}