#include <bits/stdc++.h>
using namespace std;

#define Prince ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {  
        int n; 
        cin >> n; 
        string ch, ans = ""; 
        cin >> ch; 
        int one = -1; 
        for ( int i = 0; i < n; i++ ) {
                if ( ch[i] == '1' ) { 
                        one = i;
                        break;
                }
                ans += ch[i];
        }        

        if ( one == -1 ) {
                cout << ch << endl; 
                return;
        }

        int zero = -1;
        for ( int i = n-1; i >= 0; i-- ) {
                if ( ch[i] == '0' ) {
                        zero = i; 
                        break;
                }
        }

        if ( zero == -1 || zero < one ) {
                cout << ch << endl;
                return;
        }

        cout << ans; 
        for ( int i = zero; i < n; i++ ) 
                cout << ch[i]; 
        cout << endl; 
}

int main()
{
        Prince;

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
