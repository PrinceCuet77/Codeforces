#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        int r1, c1, r2, c2; 
        while ( cin >> r1 >> c1 >> r2 >> c2 ) {
                if ( r1 == r2 || c1 == c2 ) cout << 1 << " ";
                else cout << 2 << " ";

                if ( (r1 + c1) % 2 != (r2 + c2) % 2 ) cout << 0 << " ";
                else {
                        if ( r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 ) cout << 1 << " ";
                        else cout << 2 << " ";
                }

                cout << max(abs(r1 - r2), abs(c1 - c2)) << endl; 
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
