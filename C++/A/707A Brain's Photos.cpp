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
        int n, m; 
        while ( cin >> n >> m ) {
                char mat[n][m];
                bood color = false;
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < m; j++ ) {
                                cin >> mat[i][j]; 
                                if ( mat[i][j] == 'C' || mat[i][j] == 'M' || mat[i][j] == 'Y' ) 
                                        color = true;
                        }
                }

                if ( color ) cout << "#Color\n";
                else cout << "#Black&White\n";
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

        // int tc;
        // cin >> tc;
        // while ( tc-- )
                solve();

        return 0;
}
