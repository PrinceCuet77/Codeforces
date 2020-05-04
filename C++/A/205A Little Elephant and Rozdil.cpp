#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll n;
        while ( cin >> n ) {
                ll mn = 1e9+5;
                ll a[n];
                for ( ll i = 0; i < n; i++ ) {
                        cin >> a[i];
                        mn = min(mn, a[i]);
                }

                bool flag = false;
                ll cnt = 0, ans;
                for ( ll i = 0; i < n; i++ ) {
                        if ( a[i] == mn ) {
                                if ( cnt == 0 ) {
                                        cnt++;
                                        ans = i+1;
                                }
                                else {
                                        flag = true;
                                        break;
                                }
                        }
                }

                if ( flag )
                        cout << "Still Rozdil" << endl;
                else
                        cout << ans << endl;
        }

        return 0;
}
205
