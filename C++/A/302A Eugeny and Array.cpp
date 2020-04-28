#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( scanf("%d %d", &n, &m) == 2 ) {
                int a[n], one = 0, neone = 0;
                for ( int i = 0; i < n; i++ ) {
                        scanf("%d", &a[i]);
                        if ( a[i] == 1 )
                                one++;
                        else
                                neone++;
                }

                for ( int i = 0; i < m; i++ ) {
                        int l, r;
                        scanf("%d %d", &l, &r);

                        int t = r-l+1;
                        if ( t & 1 ) {
                                printf("0\n");
                                continue;
                        }
                        else {
                                if ( t/2 <= one && t/2 <= neone )
                                        printf("1\n");
                                else
                                        printf("0\n");
                        }
                }
        }

        return 0;
}
