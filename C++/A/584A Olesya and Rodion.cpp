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
        int n, t; 
        while ( cin >> n >> t ) {
                if ( t == 10 && n == 1 ) {
                        cout << -1 << endl; 
                        continue;
                }
                else if ( t == 10 && n > 1 ) {
                        for ( int i = 0; i < n-1; i++ ) 
                                cout << "1";
                        cout << "0" << endl; 
                        continue;
                }

                for ( int i = 0; i < n; i++ ) 
                        cout << t;
                cout << endl; 
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
