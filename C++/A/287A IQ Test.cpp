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

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        int a[4][4];
        for ( int i = 0; i < 4; i++ ) {
                for ( int j = 0; j < 4; j++ ) {
                        char c;
                        cin >> c;
                        if ( c == '#' ) a[i][j] = 0;
                        else a[i][j] = 1; 
                }
        }

        for ( int i = 0; i < 3; i++ ) {
                for ( int j = 0; j < 3; j++ ) {
                        int val = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1]; 
                        if ( val != 2 ) {
                                cout << "YES\n";
                                return 0;
                        }
                }
        }

        cout << "NO\n";

        return 0;
}
