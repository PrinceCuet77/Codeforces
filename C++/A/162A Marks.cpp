#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( scanf("%d %d", &n, &m) == 2 ) {
                char mat[n][m];
                int maxMarks[m];
                memset(maxMarks, 0, sizeof(maxMarks));
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < m; j++ ) {
                                cin >> mat[i][j];
                                maxMarks[j] = max(maxMarks[j], mat[i][j]-'0');
                        }
                }

                int cnt = 0;
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < m; j++ ) {
                                if ( maxMarks[j] == mat[i][j]-'0' ) {
                                        cnt++;
                                        break;
                                }
                        }
                }

                printf("%d\n", cnt);
        }

        return 0;
}
