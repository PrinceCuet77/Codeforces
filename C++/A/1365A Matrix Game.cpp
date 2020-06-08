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
                int r[n], c[m]; 
                memset(r, false, sizeof(r));
                memset(c, false, sizeof(c));
        
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < m; j++ ) {
                                int a; 
                                cin >> a; 
                                if ( a ) {
                                        r[i] = true;
                                        c[j] = true;
                                }
                        }
                }

                int f = 0, s = 0;
                for ( int i = 0; i < n; i++ ) 
                        if ( r[i] == false ) 
                                f++;
                

                for ( int i = 0; i < m; i++ ) 
                        if ( c[i] == false ) 
                                s++;
                
                if ( min(f, s) % 2 ) cout << "Ashish\n";
                else cout << "Vivek\n";
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
