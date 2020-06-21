#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        string ch1, ch2; 
        while ( cin >> ch1 >> ch2 ) {
                if ( ch1.length() != ch2.length() ) {
                        cout << "NO" << endl; 
                        continue;
                }

                if ( ch1 == ch2 ) {
                        cout << "YES" << endl; 
                        continue;
                }

                map < char, int > mp1, mp2;
                int cnt = 0;
                for ( int i = 0; i < ch1.length(); i++ ) {
                        if ( ch1[i] != ch2[i] ) { 
                                cnt++;
                                mp1[ch1[i]]++;
                                mp2[ch2[i]]++;
                        }
                }

                if ( cnt == 2 ) {
                        bool flag = true;
                        for ( auto x : mp1 ) {
                                if ( mp2[x.first] != 1 ) {
                                        flag = false;
                                        break;
                                }
                        } 

                        if ( flag ) cout << "YES" << endl; 
                        else cout << "NO" << endl; 
                }
                else cout << "NO" << endl; 
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
