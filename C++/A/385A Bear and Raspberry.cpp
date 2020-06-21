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
        int n, c; 
        while ( cin >> n >> c ) {
                int a[n];
                for ( int i = 0; i < n; i++ ) 
                        cin >> a[i];

                int ans = INT_MIN;
                for ( int i = 0; i < n-1; i++ ) 
                        ans = max(ans, a[i] - a[i+1] - c);

                if ( ans < 0 ) ans = 0;
                cout << ans << endl ;
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
