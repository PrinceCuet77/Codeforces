#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll n, k;
        while ( cin >> n >> k ) {
                int ans = -1e9;
                for ( ll i = 0; i < n; i++ ) {
                        ll f, t;
                        cin >> f >> t;
                        if ( t <= k ) {
                                if ( f > ans )
                                        ans = f;
                        }
                        else {
                                if ( f-(t-k) > ans )
                                        ans = f-(t-k);
                        }
                }
                cout << ans << endl;
        }

        return 0;
}
