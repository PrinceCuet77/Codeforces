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
                map < pair < int, int >, int > mp; 
                for ( int i = 0; i < n; i++ ) {
                        int a, b; 
                        cin >> a >> b; 
                        mp[{a, b}]++;
                }

                int ans = -1;
                for ( auto x : mp ) {
                        ans = max(ans, x.second);
                }

                cout << ans << "\n";
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        solve();

        return 0;
}

