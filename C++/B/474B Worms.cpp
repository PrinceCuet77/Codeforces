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
                vector < ll > v(n), t(n);
                for ( ll i = 0; i < n; i++ ) 
                        cin >> v[i];

                t[0] = v[0]; 
                for ( ll i = 1; i < n; i++ ) 
                        t[i] = t[i-1] + v[i];

                ll m; 
                cin >> m; 
                while ( m-- ) {
                        ll q; 
                        cin >> q; 

                        auto it = lower_bound(t.begin(), t.end(), q);

                        if ( it == t.end() ) cout << n << endl; 
                        else cout << (it - t.begin()) + 1 << endl; 
                }
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
