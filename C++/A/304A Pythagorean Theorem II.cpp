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
                ll ans = 0; 
                for ( ll i = 1; i <= n; i++ ) {
                        for ( ll j = i; j <= n; j++ ) {
                                ll val = i * i + j * j;
                                double t = sqrt(val); 
                                if ( abs(t - (int)t) == 0 ) {
                                        if ( t >= j && t <= n ) 
                                                ans++;
                                }
                        }
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
