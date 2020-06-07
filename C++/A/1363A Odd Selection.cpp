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
        int n, k; 
        while ( cin >> n >> k ) {
                int a[n], o = 0, e = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> a[i]; 

                        if ( a[i] & 1 ) o++; 
                        else e++;
                }

                bool flag = false;
                for ( int i = 1; i <= min(k , o); i += 2 ) {
                        if ( e >= (k - i) ) {
                                cout << "yes\n";
                                flag = true;
                                break;
                        }
                }

                if ( !flag ) cout << "no\n";
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
