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

void solve() {  
        int n, x, m; 
        while ( cin >> n >> x >> m ) { 
                int low = x, high = x;
                for ( int i = 0; i < m; i++ ) {
                        int l, r; 
                        cin >> l >> r; 
                        if ( (l <= low && low <= r) || (l <= high && high <= r) ) {
                                low = min(low, l);
                                high = max(high, r);
                        }
                } 

                cout << high - low + 1 << endl; 
        }
}

int main()
{
        IOS;

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
