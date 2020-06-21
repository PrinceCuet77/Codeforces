#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll; 

void solve() {
        ll n; 
        while ( cin >> n ) {
                ll a[n]; 
                for ( ll i = 0; i < n; i++ ) 
                        cin >> a[i]; 

                ll ans = a[0];
                ll cnt = 1;
                for ( ll i = 1; i < n; i++ ) {
                        ll r = a[i] - 1; 
                        ans += (r * cnt) + a[i];
                        cnt++;
                }

                cout << ans << endl; 
        }
}

int main()
{
        IOS;

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        solve();

        return 0;
}
