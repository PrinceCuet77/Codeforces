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
        int n, m, d; 
        while ( cin >> n >> m >> d ) {
                vector < int > v(n*m);
                for ( int i = 0; i < n * m; i++ ) 
                        cin >> v[i]; 

                sort(v.begin(), v.end()); 
                
                int mid = (n*m)/2, ans = 0;
                for ( int i = 0; i < n * m; i++ ) {
                        if ( v[i] < v[mid] ) {
                                if ( (v[mid] - v[i]) % d != 0 ) {
                                        ans = -1; 
                                        break;
                                }
                                ans += (v[mid] - v[i]) / d; 
                        }
                        else {
                                if ( (v[i] - v[mid]) % d != 0 ) {
                                        ans = -1; 
                                        break;
                                }
                                ans += (v[i] - v[mid]) / d;
                        }
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

        solve();

        return 0;
}
