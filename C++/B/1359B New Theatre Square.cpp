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
        int n, m, x, y; 
        while ( cin >> n >> m >> x >> y ) {
                int s = 0;
                char ch[n][m]; 
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < m; j++ ) {
                                cin >> ch[i][j];
                                if ( ch[i][j] == '.' ) s++;
                        }
                }

                int d = 0;
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < m-1; j++ ) {
                                if ( ch[i][j] == '.' && ch[i][j+1] == '.' ) {
                                        d++;
                                        j++;
                                }
                        }
                }

                cout << min((s * x), (d * y + (s - 2 * d) * x)) << endl; 
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
