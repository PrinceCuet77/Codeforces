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
                int a[n], b[n]; 
                for ( int i = 0; i < n; i++ ) {
                        cin >> a[i]; 
                        b[i] = a[i];
                }

                sort(b, b+n);

                int l = 0, r = n-1;
                for ( ; l < n && a[l] == b[l]; l++ );
                for ( ; r >= 0 && a[r] == b[r]; r-- );

                bool flag = false;
                for ( int i = l; i < r; i++ ) {
                        if ( a[i] < a[i+1] ) {
                                flag = true; 
                                break;
                        }
                }

                if ( l == n ) {
                        cout << "yes\n"; 
                        cout << "1 1\n"; 
                        continue;
                }

                if ( flag ) 
                        cout << "no\n";
                else {
                        cout << "yes\n"; 
                        cout << l+1 << " " << r+1 << endl; 
                }
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
