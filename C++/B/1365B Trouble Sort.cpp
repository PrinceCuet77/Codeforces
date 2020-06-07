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
                int a[n], b[n];
                bool flag = false;
                for ( int i = 0; i < n; i++ ) 
                        cin >> a[i];
                
                int all0 = 0, all1 = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> b[i];
                        if ( b[i] == 0 ) all0++;
                        else all1++;
                }

                int val = a[0];
                for ( int i = 1; i < n; i++ ) {
                        if ( val > a[i] ) {
                                flag = true;
                                break;
                        }
                        val = a[i];
                }

                if ( flag == false ) {
                        // cout << "already" << endl; 
                        cout << "yes\n";
                        continue;
                }

                if ( all0 == n || all1 == n ) {
                        // cout << all0 << " " << all1 << endl; 
                        cout << "no\n";
                        continue;
                }

                for ( int i = 0; i < n; i++ ) {
                        for ( int j = i+1; j < n; j++ ) {
                                if ( b[i] != b[j] ) {
                                        if ( a[i] > a[j] ) {
                                                swap(a[i], a[j]);
                                                swap(b[i], b[j]);
                                        }
                                }
                        }
                }

                val = a[0];
                for ( int i = 1; i < n; i++ ) {
                        if ( val > a[i] ) {
                                flag = true;
                                break;
                        }
                        val = a[i];
                }

                if ( flag == false ) cout << "no\n";
                else cout << "yes\n";
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
