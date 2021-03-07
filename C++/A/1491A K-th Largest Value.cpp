#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n, q;
        cin >> n >> q;

        int cnt = 0;
        vector < int > a;
        for ( int i = 0; i < n; i++ ) {
                int x;
                cin >> x;
                a.push_back(x);
                if ( x == 1 ) cnt++;
        }

        for ( int i = 0; i < q; i++ ) {
                int f, s;
                cin >> f >> s;
                if ( f == 1 ) {
                        if ( a[s-1] ) cnt--;
                        else cnt++;
                        a[s-1] = 1 - a[s-1];
                } else {
                        if ( s > cnt ) cout << 0 << endl;
                        else cout << 1 << endl;
                }
        }
}

int main()
{
        solve();

        return 0;
}
