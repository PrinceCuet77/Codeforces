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

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll; 

void solve() {  
        ll n; 
        while ( cin >> n ) {
                ll a[n+1];
                a[0] = 0;
                for ( ll i = 1; i <= n; i++ ) {
                        ll tmp; 
                        cin >> tmp; 
                        a[i] = a[i-1] + tmp;
                }

                ll ans = 0, x = 0; 
                for ( ll i = 1; i < n; i++ ) {
                        if ( a[i] * 3 == a[n] * 2 ) ans += x; 
                        if ( a[i] * 3 == a[n] ) x++;
                }

                cout << ans << endl; 
        }
}

int main()
{
        IOS;

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        solve();

        return 0;
}
