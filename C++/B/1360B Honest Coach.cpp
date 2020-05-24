#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    while ( cin >> n ) {
        int a[n];
        for ( int i = 0; i < n; i++ ) 
            cin >> a[i];
        
        sort(a, a+n);
        int ans = a[1] - a[0];
        for ( int i = 2; i < n; i++ ) {
            int t = a[i] - a[i-1];
            ans = min(ans, t);
        }

        cout << ans << "\n";
    }
}

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int tc; 
    cin >> tc; 
    while ( tc-- ) {
        solve();
    }
}
