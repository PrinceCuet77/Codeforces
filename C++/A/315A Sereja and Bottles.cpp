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
        int n; 
        while ( cin >> n ) {
                int a[n], b[n], cnt = 0; 
                for ( int i = 0; i < n; i++ ) 
                        cin >> a[i] >> b[i];

                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < n; j++ ) {
                                if ( a[i] == b[j] && i != j ) {
                                        cnt++;
                                        break;
                                }
                        }
                }

                cout << n - cnt << endl;
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
