#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                int ans, mx = -1;
                for ( int i = 0; i < n; i++ ) {
                        int a;
                        cin >> a;
                        int t = a / m;
                        if ( a % m != 0 )
                                t++;
                        if ( mx <= t ) {
                                ans = i+1;
                                mx = max(mx, t);
                        }
                }

                cout << ans << endl;
        }

        return 0;
}
