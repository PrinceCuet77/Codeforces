#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        int n;
        cin >> n;

        int a[n+5];
        for ( int i = 0; i < n; i++ )
                cin >> a[i];

        sort(a, a+n);
        for ( int i = 1; i < n; i++ ) {
                if ( abs(a[i] - a[i-1]) > 1 ) {
                        cout << "NO" << endl;
                        return;
                }
        }

        cout << "YES" << endl;
}

int main()
{
        IOS;

        // freopen("input.txt", "r", stdin);

        int testCase;
        cin >> testCase;

        while ( testCase-- )
                solve();

        return 0;
}
