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
        char a[10][10]; 
        for ( int i = 0; i < 9; i++ ) 
                for ( int j = 0; j < 9; j++ ) 
                        cin >> a[i][j];
        
        for ( int i = 0; i < 9; i++ ) {
                for ( int j = 0; j < 9; j++ ) {
                        if ( a[i][j] == '9' ) 
                                a[i][j] = '1';
                }
        }

        for ( int i = 0; i < 9; i++ ) {
                for ( int j = 0; j < 9; j++ ) 
                        cout << a[i][j];
                cout << "\n";
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
