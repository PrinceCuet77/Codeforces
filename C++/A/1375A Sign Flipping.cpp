#include <bits/stdc++.h>
using namespace std;

#define Prince ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {  
        int n;
        cin >> n;  
        
        int a[n];
        for ( int i = 0; i < n; i++ )
                cin >> a[i];

        bool flag;
        cout << a[0] << " ";
        if ( a[0] < 0 ) 
                flag = true;
        else 
                flag = false;

        for ( int i = 1; i < n; i++ ) {
                if ( flag == false ) {
                        if ( a[i] > 0 ) cout << -a[i] << " ";
                        else cout << a[i] << " "; 
                        flag = true;
                }
                else {
                        if ( a[i] < 0 ) cout << -a[i] << " ";
                        else cout << a[i] << " ";
                        flag = false;
                }
        }
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
