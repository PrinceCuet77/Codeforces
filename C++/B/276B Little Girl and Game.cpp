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
                map < char, int > mp; 
                for ( int i = 0; i < ch.length(); i++ ) 
                        mp[ch[i]]++;
                
                int cnt = 0;
                for ( auto c : mp ) {
                        if ( c.second % 2 == 1 ) cnt++;
                }

                if ( cnt <= 1 ) {
                        cout << "First" << endl; 
                        continue;
                }
                else {
                        if ( cnt & 1 ) cout << "First" << endl; 
                        else cout << "Second" << endl;
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

        // int tc;
        // cin >> tc;
        // while ( tc-- )
                solve();

        return 0;
}
