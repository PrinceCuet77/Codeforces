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
        string ch; 
        while ( cin >> ch ) {
                int one = -1, two = -1, three = -1, ans = INT_MAX; 
                for ( int i = 0; i < ch.length(); i++ ) {
                        if ( ch[i] == '1' ) one = i;
                        else if ( ch[i] == '2' ) two = i; 
                        else if ( ch[i] == '3' ) three = i; 

                        if ( one != -1 && two != -1 && three != -1 ) {
                                int mx = max(one, max(two, three));
                                int mn = min(one, min(two, three)); 
                                ans = min(ans, mx-mn+1); 

                                if ( ans == 3 ) break;
                        }
                }

                if ( ans == INT_MAX ) cout << "0\n";
                else cout << ans << "\n";
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
