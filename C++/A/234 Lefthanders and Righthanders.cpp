#include <bits/stdc++.h>
using namespace std;

#define Prince ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        int n; 
        while ( cin >> n ) {
                string ch; 
                cin >> ch; 

                for ( int i = 0, j = n/2; i < n/2; i++, j++ ) 
                        if ( ch[i] == 'L' ) cout << i+1 << " " << j+1 << endl; 
                        else cout << j+1 << " " << i+1 << endl; 
        }
}

int main()
{
        Prince;

        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        
        solve();

        return 0;
}
