#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
        //freopen("file.txt", "r", stdin);
        ll tc;
        cin >> tc;
        while ( tc-- ) {
                ll n, k;
                cin >> n >> k;

                set < ll > s;
                ll a[n];
                for ( int i = 0; i < n; i++ ) {
                        cin >> a[i];
                        s.insert(a[i]);
                }

                if ( s.size() > k ) {
                        cout << -1 << endl;
                        continue;
                }

                cout << n * k << endl;
                for ( int i = 0; i < n; i++ ) {
                        for ( auto x : s )
                                cout << x << " ";
                        for ( int j = 0; j < k-s.size(); j++ )
                                cout << 1 << " ";
                }
                cout << endl;
        }

        return 0;
}
