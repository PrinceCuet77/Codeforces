/*************************************************
*        Author      : Rezoan Shakil Prince      *
*        Institution : CUET                      *
*************************************************/

#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n, k;
        cin >> n >> k;

        int a[n], b[n];
        for ( int i = 0; i < n; i++ )
                cin >> a[i];
        sort(a, a+n);

        for ( int i = 0; i < n; i++ )
                cin >> b[i];
        sort(b, b+n, greater<int>());

        int sum = 0;
        for ( int i = 0; i < k; i++ )
                sum += max(b[i], a[i]);

        for ( int i = k; i < n; i++ )
                sum += a[i];

        cout << sum << endl;
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        //freopen("input.txt", "r", stdin);

        int tc;
        cin >> tc;
        while ( tc-- ) {
                solve();
        }

        return 0;
}
