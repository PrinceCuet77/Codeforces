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
        int n; 
        while ( cin >> n ) {
                string m; 
                cin >> m; 

                bool flag = false;
                string a = "1", b = "1";
                for ( int i = 1; i < n; i++ ) {
                        if ( m[i] == '0' ) {
                                a += "0"; 
                                b += "0";
                        }
                        else if ( m[i] == '1' && flag == false ) {
                                a += "1"; 
                                b += "0";
                                flag = true;
                        }
                        else if ( m[i] == '1' && flag == true ) {
                                a += "0";
                                b += "1";
                        }
                        else if ( m[i] == '2' && flag == false ) {
                                a += "1";
                                b += "1";
                        }
                        else if ( m[i] == '2' && flag == true ) {
                                a += "0";
                                b += "2";
                        }
                }

                cout << a << "\n" << b << "\n";
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
