/********************************************************************************
*                                                                               *
*        Author     : Rezoan Shakil Prince                                      *
*        Batch      : 14                                                        *
*        Email      : prince.cuet.77@gmail.com                                  *
*        University : Chittagong University of Engineering and Technology       *
*                                                                               *
********************************************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

void solve() {
        ll a, b; 
        while ( cin >> a >> b ) {
                if ( a == b ) {
                        cout << "0\n";
                        return;
                }

                if ( (a & 1LL) && (b & 1LL) ) {
                        cout << "-1\n";
                        return;
                }

                ll mx = max(a, b);
                ll mn = min(a, b);

                bool flag = false;
                ll cnt = 0; 
                while ( 1 ) {
                        if ( mx == mn ) {
                                flag = false;
                                break;
                        }

                        if ( mx & 1LL ) {
                                flag = true;
                                break;
                        }

                        mx /= 2LL; 
                        cnt++;
                }

                if ( flag ) {
                        cout << "-1\n"; 
                        return;
                }

                ll ans = 0; 
                if ( cnt >= 3 ) {
                        ll t = cnt / 3;
                        ans += t;
                        cnt -= (3 * t);
                }

                if ( cnt >= 2 ) {
                        ll t = cnt / 2;
                        ans += t;
                        cnt -= (2 * t); 
                }

                ans += cnt;

                cout << ans << "\n";
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
