#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( cin >> n ) {
                char mat[n][n];
                for ( int i = 0; i < n; i++ )
                        for ( int j = 0; j < n; j++ )
                                cin >> mat[i][j];

                bool flag = false;
                char diagonalChar = mat[0][0];
                char otherChar = mat[0][1];

                if ( diagonalChar == otherChar ) {
                        cout << "NO" << endl;
                        continue;
                }

                for ( int i = 0; i < n; i++ ) {
                        if ( mat[i][i] != diagonalChar || mat[n-i-1][i] != diagonalChar ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag ) {
                        cout << "NO" << endl;
                        continue;
                }

                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < n; j++ ) {
                                if ( i == j || (i+j) == n-1 )
                                        continue;
                                if ( i != j || (i+j) != n-1 ) {
                                        if ( mat[i][j] != otherChar ) {
                                                flag = true;
                                                break;
                                        }
                                }
                        }
                        if ( flag )
                                break;
                }

                if ( flag )
                        cout << "NO" << endl;
                else
                        cout << "YES" << endl;
        }

        return 0;
}
