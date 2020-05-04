#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                int a[n];
                for ( int i = 0; i < n; i++ )
                        cin >> a[i];

                sort(a, a+n);

                int cnt = 0;
                for ( int i = 0; i < m; i++ ) {
                        if ( a[i] < 0 )
                                cnt += a[i];
                }

                cout << -cnt << endl;
        }

        return 0;
}
