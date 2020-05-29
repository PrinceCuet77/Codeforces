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

typedef long long ll; 

void solve() {
        ll h, c, t; 
        while ( cin >> h >> c >> t ) {
                if ( h == t ) {
                        cout << "1\n"; 
                        return;
                }

                if ( 2 * t <= (h + c) ) {
                        cout << "2\n"; 
                        return;
                }
                else {
                        ll x = (t - c) / (2 * t - c - h); 
                        ll y = x + 1; 

                        long double try1 = ((h * x) + c * (x - 1)) / (1.0 * 2 * x - 1);
                        long double try2 = ((h * y) + c * (y - 1)) / (1.0 * 2 * y - 1);

                        long double diff1 = abs(try1 - t);
                        long double diff2 = abs(try2 - t);

                        if ( diff1 <= diff2 ) cout << 2 * x - 1 << "\n";
                        else cout << 2 * y - 1 << "\n";
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

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
