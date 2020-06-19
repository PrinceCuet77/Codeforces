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

bool isValid(ll n, ll a[]) {
        ll sum = 1; 
        for ( ll i = 0; i < 10; i++ ) 
                sum *= a[i];

        if ( sum >= n ) return true; 
        return false;
}

void solve() {  
        ll n; 
        while ( cin >> n ) {
                string ch = "codeforces";
                ll a[10]; 
                for ( ll i = 0; i < 10; i++ ) 
                        a[i] = 1;

                ll i = 0;
                while ( 1 ) {
                        if ( isValid(n, a) ) 
                                break;

                        a[i % 10]++;
                        i++;
                }

                for ( ll i = 0; i < 10; i++ ) {
                        while ( a[i]-- ) 
                                cout << ch[i];
                }
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
