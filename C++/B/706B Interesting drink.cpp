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
                vector < ll > a(n);
                for ( ll i = 0; i < n; i++ ) 
                        cin >> a[i]; 

                sort(a.begin(), a.end());

                ll m;
                cin >> m; 
                for ( ll i = 0; i < m; i++ ) {
                        ll q; 
                        cin >> q; 

                        auto it = upper_bound(a.begin(), a.end(), q); 
                        cout << it - a.begin() << endl; 
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
