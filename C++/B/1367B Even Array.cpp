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
        int n; 
        cin >> n; 
        int a[n], cnt0 = 0, cnt1 = 0;
        for ( int i = 0; i < n; i++ ) { 
                cin >> a[i];
                if ( (i & 1) == 0 && (a[i] & 1) == 1 ) cnt0++;
                else if ( (i & 1) == 1 && (a[i] & 1) == 0 ) cnt1++;
        }

        if ( cnt0 != cnt1 ) {
                cout << -1 << endl; 
        }
        else {
                cout << cnt1 << endl; 
        }
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
