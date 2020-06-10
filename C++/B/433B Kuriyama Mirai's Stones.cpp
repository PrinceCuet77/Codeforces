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
                ll v[n+1], u[n+1]; 
                for ( ll i = 1; i <= n; i++ ) {
                        cin >> v[i]; 
                        u[i] = v[i];
                }

                sort(u+1, u+n+1);

                for ( int i = 1; i <= n; i++ ) { 
                        v[i] += v[i-1];
                        u[i] += u[i-1];
                }

                ll m; 
                cin >> m;
                for ( ll i = 0; i < m; i++ ) {
                        ll opt, l , r; 
                        cin >> opt >> l >> r; 

                        if ( opt == 1 ) 
                                cout << v[r] - v[l-1] << "\n";
                        else if ( opt == 2 ) 
                                cout << u[r] - u[l-1] << "\n";
                }
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

        solve();

        return 0;
}
