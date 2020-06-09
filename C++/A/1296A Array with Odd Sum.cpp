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
                int a, odd = 0, even = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> a;
                        if ( (a & 1 ) ) odd++; 
                        else even++;
                }

                if ( n == even ) {
                        cout << "NO\n";
                        continue;
                }

                if ( n == odd && (n & 1) == 1 ) {
                        cout << "YES\n";
                        continue;
                }
                else if ( n == odd & (n & 1) == 0 ) {
                        cout << "NO\n";
                        continue;
                }

                cout << "YES\n";
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
