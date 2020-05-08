#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( cin >> n ) {
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < n-i; j++ )
                                cout << "  ";
                        for ( int j = 0; j <= i; j++ ) {
                                if ( i == 0 && j == i )
                                        cout << j;
                                else
                                        cout << j << " ";
                        }
                        for ( int j = 1, t = i; j <= i; j++, t-- ) {
                                if ( j == i )
                                        cout << t-1;
                                else
                                        cout << t-1 << " ";
                        }
                        cout << endl;
                }

                for ( int i = 0; i <= n; i++ )
                        cout << i << " ";

                for ( int i = n-1; i >= 0; i-- ) {
                        if ( i == 0 )
                                cout << i;
                        else
                                cout << i << " ";
                }
                cout << endl;

                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j <= i; j++ )
                                cout << "  ";
                        for ( int j = i, t = 0; j < n; j++, t++ ) {
                                if ( i == n-1 && j == n-1 )
                                        cout << t;
                                else
                                        cout << t << " ";
                        }
                        for ( int j = 0, t = n-i-2; j < n-i-1; j++, t-- ) {
                                if ( j == n-i-2 )
                                        cout << t;
                                else
                                        cout << t << " ";
                        }
                        cout << endl;
                }
        }

        return 0;
}
