#include <bits/stdc++.h>
using namespace std;

#define Prince ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll; 

void solve() {
        vector < ll > v(3); 
        while ( cin >> v[0] >> v[1] >> v[2] ) {  
                sort(v.begin(), v.end()); 

                if ( v[2] <= (v[0] + v[1]) ) 
                        cout << (v[0] + v[1] + v[2]) / 2 << endl; 
                else 
                        cout << v[0] + v[1] << endl; 
        }
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
