#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( scanf("%d %d", &n, &m) == 2 ) {
                int mat[n][m];
                for ( int i = 0; i < n; i++ )
                        for ( int j = 0; j < m; j++ )
                                scanf("%d", &mat[i][j]);

                bool flag = false;
                for ( int i = 0; i < m; i++ ) {
                        if ( mat[0][i] == 1 || mat[n-1][i] == 1 ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag ) {
                        printf("2\n");
                        continue;
                }

                for ( int i = 0; i < n; i++ ) {
                        if ( mat[i][0] == 1 || mat[i][m-1] == 1 ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag ) {
                        printf("2\n");
                        continue;
                }

                printf("4\n");
        }

        return 0;
}
