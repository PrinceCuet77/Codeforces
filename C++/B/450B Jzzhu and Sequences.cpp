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

#define mod 1000000007

typedef long long ll; 

void solve() { 
        ll f[6]; 
        while ( cin >> f[0] >> f[1] ) {
                ll n; 
                cin >> n; 
                for ( int i = 2; i < 6; i++ ) 
                        f[i] = f[i-1] - f[i-2];

                ll t = (n - 1) % 6;
                ll ans = (mod + f[t] % mod) % mod; 
                cout << ans << "\n";
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        solve();

        return 0;
}
