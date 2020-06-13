/********************************************************************************
*                                                                               *
*        Author     : Rezoan Shakil Prince                                      *
*        Batch      : 14                                                        *
*        Email      : prince.cuet.77@gmail.com                                  *
*        University : Chittagong University of Engineering and Technology       *
*                                                                               *
********************************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"  

void solve() {  
        int n, x; 
        cin >> n >> x;

        int sum = 0, a[n]; 
        for ( int i = 0; i < n; i++ ) {
                cin >> a[i];
                sum += a[i];
        }

        if ( sum % x != 0 ) {
                cout << n << endl; 
                return;
        }

        int c = 0; 
        while ( c < n && a[n-c-1] % x == 0 ) 
                c++;

        int b = 0; 
        while ( b < n && a[b] % x == 0 ) 
                b++;

        cout << n - min(b, c) - 1 << endl; 
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
