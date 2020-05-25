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
        ll a, b, n, s; 
        while ( cin >> a >> b >> n >> s ) {
                if ( s / n <= a ) {
                        ll t = s % n; 
                        if ( t <= b ) cout << "yes\n"; 
                        else cout << "no\n";
                }
                else {
                        ll t = s - a * n; 
                        if ( t <= b ) cout << "yes\n"; 
                        else cout << "no\n"; 
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
