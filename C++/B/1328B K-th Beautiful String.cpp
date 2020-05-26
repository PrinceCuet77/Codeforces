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
        ll n, k; 
        while ( cin >> n >> k ) {
                string s = "";
                for ( ll i = 0; i < n; i++ ) 
                        s += "a";
                
                for ( ll i = n-2; i >= 0; i-- ) {
                        if ( k <= (n-i-1) ) {
                                s[i] = 'b';
                                break;
                        }
                        k -= (n-i-1);
                }
                s[n-k] = 'b'; 

                cout << s << "\n";
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
