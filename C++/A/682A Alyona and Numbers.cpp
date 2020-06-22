#include <bits/stdc++.h>
using namespace std;

#define Prince ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll; 

void solve() {
        ll n, m; 
        while ( cin >> n >> m ) {
                map < ll, ll > x, y; 
                for ( ll i = 1; i <= n; i++ ) x[i % 5]++;
                for ( ll i = 1; i <= m; i++ ) y[i % 5]++;

                ll ans = 0; 
                for ( ll i = 0; i < 5; i++ ) 
                        ans += x[i] * y[(5 - i) % 5];

                cout << ans << endl; 
        }
}

int main()
{
        Prince;

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        solve();

        return 0;
}
