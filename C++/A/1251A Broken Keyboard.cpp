#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        string ch; 
        cin >> ch; 

        set < char > st; 
        for ( int i = 0; i < ch.length(); i++ ) {
                int cnt = 1; 
                char c = ch[i];
                if ( i+1 != ch.length() ) {
                        while ( c == ch[i+1] ) { 
                                cnt++;
                                i++;
                        }
                }

                if ( cnt & 1 ) st.insert(c);
        }

        for ( auto x : st ) 
                cout << x;
        cout << endl; 
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
