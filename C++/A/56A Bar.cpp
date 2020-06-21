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

bool num(string a) {
        if ( a.length() == 1 )
                return true;
        if( a[0] == '1' && (a[1] >= '0' && a[1] <= '7') && a.length() == 2 )
                return true;
        else 
                return false;
}

bool alcohol(string a) {
        if ( a == "ABSINTH" || a == "BEER" || a == "BRANDY" ||
                a == "CHAMPAGNE" || a == "GIN" || a == "RUM" || a == "SAKE" ||
                a == "TEQUILA" || a == "VODKA" || a == "WHISKEY" || a == "WINE" )
                return true;
        else
                return false;
}

void solve() {
        int n;
        cin >> n;
        int cnt = 0; 
        for ( int i = 0; i < n; i++ ) {
                string s; 
                cin >> s; 

                if ( s[0] >= '0' && s[0] <= '9' ) {
                        if( num(s) ) 
                                cnt++;
                }
                else {
                        if( alcohol(s) ) 
                                cnt++;
                }
        }

        cout << cnt << endl; 
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
