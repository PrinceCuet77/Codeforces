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

void solve() { 
        int n; 
        while ( cin >> n ) {
                int a[n]; 
                for ( int i = 0; i < n; i++ ) 
                        cin >> a[i];

                sort(a, a+n); 
                int ans = 1, sum = 1; 
                for ( int i = 0; i < n; i++ ) {
                        if ( a[i] <= sum ) {
                                sum++;
                                ans = sum;

                        }
                        else sum++;
                }

                cout << ans << "\n";
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
