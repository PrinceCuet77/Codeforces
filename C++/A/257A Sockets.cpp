#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        int n, m, k; 
        while ( cin >> n >> m >> k ) {
                vector < int > a(n);
                for ( int i = 0; i < n; i++ ) {
                        cin >> a[i];
                        a[i]--;
                }

                sort(a.begin(), a.end(), greater < int > ());

                m -= k; 
                if ( m <= 0 ) {
                        cout << 0 << endl; 
                        continue;
                }

                int cnt = 0; 
                bool flag = false;
                for ( int i = 0; i < n; i++ ) {
                        m -= a[i];
                        cnt++; 
                        if ( m <= 0 ) {
                                flag = true; 
                                break;
                        }
                }

                if ( flag ) cout << cnt << endl; 
                else cout << -1 << endl; 
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
