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

void solve() {  
        int n, k; 
        cin >> n >> k; 

        string ch; 
        cin >> ch;

        int cnt = 0, pos = 0;
        if ( ch[0] == '0' ) {
                cnt++;
                pos = 0;
        }

        for ( int i = 1; i < n; i++ ) {
                if ( ch[i] == '0' ) {
                        if ( i - pos - k > 0) {
                                cnt++;
                                pos = i;
                        }
                }
                else {
                        if ( i - pos - k <= 0 ) 
                                cnt--;
                        pos = i;
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

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
