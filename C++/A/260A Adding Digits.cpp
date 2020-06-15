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

void solve() {  
        ll a, b, n; 
        while ( cin >> a >> b >> n ) {
                if ( a % b == 0 ) {
                        cout << a;
                        for ( int i = 0; i < n; i++ ) cout << 0;
                        cout << endl; 
                        return;
                }
                ll t = a * 10;
                bool flag = true;
                for ( ll i = 0; i <= 9; i++ ) {
                        if ( (t+i) % b == 0 ) { 
                                t += i;
                                flag = false;
                                break;
                        }
                }

                if ( flag ) cout << -1 << endl; 
                else {
                        cout << t; 
                        for ( int i = 0; i < n-1; i++ ) cout << 0; 
                        cout << endl; 
                }
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
