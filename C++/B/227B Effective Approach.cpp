#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll n;
        while ( cin >> n ) {
                map < ll, ll > mp;
                for ( ll i = 0; i < n; i++ ) {
                        ll a;
                        cin >> a;
                        mp[a] = i+1;
                }

                ll m, ans1 = 0, ans2 = 0;
                cin >> m;
                for ( ll i = 0; i < m; i++ ) {
                        ll aa;
                        cin >> aa;

                        ans1 += mp[aa];
                        ans2 += (n-mp[aa])+1;
                }

                cout << ans1 << " " << ans2 << endl;
        }

        return 0;
}
