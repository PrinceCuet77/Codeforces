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

void solve() {
        int n, a, b; 
        while ( cin >> n >> a >> b ) {
                char ch = 'a';
                int p = 0;
                string st = ""; 
                for ( int i = 0; i < a; i++ ) {
                        if ( p == b ) p = 0;
                        st += (char)(ch + p);
                        p++;
                }

                if ( n % a == 0 ) {
                        int t = n / a; 
                        for ( int i = 0; i < t; i++ ) 
                                cout << st;
                        cout << "\n"; 
                } 
                else {
                        int t = n / a; 
                        for ( int i = 0; i < t; i++ ) 
                                cout << st;

                        t = n % a; 
                        for ( int i = 0; i < t; i++ ) 
                                cout << st[i];
                        cout << "\n";
                }
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

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
