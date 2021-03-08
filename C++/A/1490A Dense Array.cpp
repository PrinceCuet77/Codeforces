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

        int cnt = 0;
        for ( int i = 0; i < n-1; i++ ) {
                int x = min(a[i], a[i+1]);
                int y = max(a[i], a[i+1]);

                while ( 2*x < y ) {
                        cnt++;
                        x += x;
                }
        }

        cout << cnt << endl;
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
