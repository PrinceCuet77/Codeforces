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

typedef long long ll; 

ll cal(ll n) {
        ll ans = 0; 
        while ( n ) {
                ans += (n % 10); 
                n /= 10;
        }

        return ans; 
}

void solve() {  
        ll k; 
        while ( cin >> k ) {
                ll n = 18; 
                while ( k ) {
                        n++;
                        if ( cal(n) == 10 ) k--;
                }

                cout << n << endl; 
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
