#include <bits/stdc++.h>
using namespace std;

#define Prince ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll; 

void solve() {  
        ll a, b, c; 
        cin >> a >> b >> c; 
        if ( a < c ) cout << 1 << " ";
        else cout << -1 << " "; 

        ll p = a * b;
        if ( p > c ) cout << b << endl; 
        else cout << -1 << endl; 
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
