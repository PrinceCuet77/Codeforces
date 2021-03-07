#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll p, a, b, c;
    cin >> p >> a >> b >> c;

    if ( p % a == 0 || p % b == 0 || p % c == 0 ) {
        cout << '0' << endl;
        return;
    }

    if ( p < min(a, min(b, c)) ) {
        cout << min(a, min(b, c)) - p << endl;
        return;
    }

    ll a1, b1, c1, t;
    t = p % a;
    a1 = a - t;

    t = p % b;
    b1 = b - t;

    t = p % c;
    c1 = c - t;

    cout << min(a1, min(b1, c1)) << endl;
}

int main() {
    int testCase;
    cin >> testCase;
    while ( testCase-- ) {
        solve();
    }

    return 0;
}
