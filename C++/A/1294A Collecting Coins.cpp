#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        int a, b, c, n; 
        cin >> a >> b >> c >> n; 
        
        int mx = max(a, max(b, c)); 
        int sum = a + b + c + n; 

        if ( sum % 3 == 0 && (sum / 3) >= mx ) cout << "YES" << endl; 
        else cout << "NO" << endl; 
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
