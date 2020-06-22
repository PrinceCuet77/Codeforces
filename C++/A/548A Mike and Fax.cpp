#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        string s; 
        while ( cin >> s ) {
                int k; 
                cin >> k;  

                int n = s.size();
                int len = n / k; 

                bool flag = true;
                for ( int i = 0; i < n; i++ ) {
                        if(n % k or s[i] != s[(i/len) * len + len - 1 - (i % len)]){
                                cout << "NO" << endl;
                                flag = false;
                                break;
                        }
                }

                if ( flag ) cout << "YES" << endl; 
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
