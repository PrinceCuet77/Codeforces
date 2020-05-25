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
        ll n, k; 
        while ( cin >> n >> k ) {
                if ( n <= k ) {
                        cout << "1\n"; 
                        return;
                }

                ll ans = 1;
                for ( ll i = 1; i <= sqrt(n); i++ ) {
                        if ( n % i == 0 ) {
                                ll t = n / i; 
                                if ( t > ans && t <= k ) 
                                        ans = t;

                                if ( i > ans && i <= k ) 
                                        ans = i;
                        }
                }

                cout << n / ans << "\n";
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
