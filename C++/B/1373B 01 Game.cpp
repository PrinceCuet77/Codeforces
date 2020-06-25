#include <bits/stdc++.h>
using namespace std;

#define Prince ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {  
        string ch; 
        cin >> ch; 

        int zero = 0, one = 0;
        for ( int i = 0; i < ch.size(); i++ ) {
                if ( ch[i] == '0' ) zero++; 
                else one++;
        }

        if ( min(zero, one) % 2 == 1 ) cout << "DA" << endl; 
        else cout << "NET" << endl; 
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
