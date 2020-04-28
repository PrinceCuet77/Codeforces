#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( scanf("%d %d", &n, &m) == 2 ) {
                char mat[n][m];

                for ( int i = 0; i < n; i++ )
                        for ( int j = 0; j < m; j++ )
                                cin >> mat[i][j];

                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < m; j++ ) {
                                if ( mat[i][j] == '.' ) {
                                        if ( (i+j) & 1 )
                                                cout << "W";
                                        else
                                                cout << "B";
                                } else
                                        cout << mat[i][j];
                        }
                        cout << endl;
                }
        }

        return 0;
}
