#include <bits/stdc++.h>
using namespace std;

int main()
{
        f//reopen("file.txt", "r", stdin);
        int k, d;
        while ( scanf("%d %d", &k, &d) == 2 ) {
                if ( k > 1 && d == 0 ) {
                        printf("No solution\n");
                        continue;
                }

                if ( k == 1 && d == 0 ) {
                        printf("0\n");
                        continue;
                }

                printf("%d", d);
                for ( int i = 1; i < k; i++ )
                        printf("0");
                printf("\n");
        }

        return 0;
}
