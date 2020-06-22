#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        int n; 
        while ( cin >> n ) {
                string ch; 
                cin >> ch; 

                map < char, int > mp; 
                int cnt = 0;
                for ( auto c : ch ) {
                        if ( c <= 'z' && c >= 'a' ) 
                                mp[c - 32]++;
                        else if ( c <= 'Z' && c >= 'A' ) {
                                if ( mp[c] > 0 ) {
                                        mp[c]--;
                                }
                                else 
                                        cnt++;
                        }
                }

                cout << cnt << endl; 
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
