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

ll findMaxMin(ll a) {
        ll mx = 0, mn = 10;

        while ( a ) {
                mx = max(mx, a % 10);
                mn = min(mn, a % 10);
                a /= 10;
        }

        return mx * mn;
}

void solve() {
        ll a, k;
        while ( cin >> a >> k ) {
                ll sum = a;
                for ( ll i = 1; i <= k-1; i++ ) {
                        ll add = findMaxMin(a);
                        sum += add;
                        if ( add == 0 )
                                break;
                        a = sum;
                }

                cout << sum << endl;
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        //freopen("input.txt", "r", stdin);

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
