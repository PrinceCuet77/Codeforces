#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; 
    while ( cin >> a >> b ) {
        int mx = max(a, b);
        int mn = min(a, b);
        mn *= 2;

        int ans = max(mx, mn); 
        cout << ans * ans << "\n";
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
