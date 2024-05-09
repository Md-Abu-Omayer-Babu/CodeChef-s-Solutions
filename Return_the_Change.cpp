// Problem link : https://www.codechef.com/problems/RETURNCHANGE

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        int n;
        cin >> n;

        int m = round(n / 10.0);
        cout << 100 - (m * 10) << endl;
    }

    return 0;
}