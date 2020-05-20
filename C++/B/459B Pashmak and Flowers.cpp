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
        ll n; 
        while ( cin >> n ) {
                ll a[n]; 
                ll mn = INT_MAX, mx = -1;
                for ( int i = 0; i < n; i++ ) {
                        cin >> a[i];
                        mx = max(mx, a[i]);
                        mn = min(mn, a[i]);
                }

                if ( mn == mx ) {
                        cout << mx - mn << " " << (n * (n - 1)) / 2 << endl; 
                        return;
                }

                ll cnt1 = 0, cnt2 = 0; 
                for ( int i = 0; i < n; i++ ) {
                        if ( mx == a[i] ) cnt1++; 
                        if ( mn == a[i] ) cnt2++;
                }

                cout << mx - mn << " " << cnt1 * cnt2 << endl;  
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

        // int tc;
        // cin >> tc;
        // while ( tc-- )
                solve();

        return 0;
}
