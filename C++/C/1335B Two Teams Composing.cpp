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
                map < int, int > mp; 
                for ( int i = 0; i < n; i++ ) {
                        int a; 
                        cin >> a; 
                        mp[a]++;
                }

                if ( n == 1 ) {
                        cout << "0\n";
                        return;
                }

                if ( n == 2 ) {
                        cout << "1\n";
                        return;
                }

                int same = -1; 
                for ( auto x : mp ) 
                        same = max(same, x.second);
                
                if ( mp.size() == n && same == 0 ) {
                        cout << "1\n";
                        return;
                }

                int unique = mp.size()-1;
                int ans = min(unique, same);

                ans = max(ans, min(unique+1, same-1));
                cout << ans << "\n";
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
