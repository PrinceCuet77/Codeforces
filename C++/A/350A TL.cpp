#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( scanf("%d %d", &n, &m) == 2 ) {
                int a[n], maxValue = 0, minFromB = 1e5;
                for ( int i = 0; i < n; i++ ) {
                        scanf("%d", &a[i]);
                        maxValue = max(maxValue, a[i]);
                }

                bool flag = false;
                for ( int i = 0; i < m; i++ ) {
                        int temp;
                        scanf("%d", &temp);
                        minFromB = min(minFromB, temp);
                        if ( temp <= maxValue )
                                flag = true;
                }
                minFromB--;

                if ( flag ) {
                        printf("-1\n");
                        continue;
                }

                flag = false;
                for ( int i = 0; i < n; i++ ) {
                        if ( 2 * a[i] <= maxValue ) {
                                flag = true;
                                break;
                        } else {
                                if ( maxValue < minFromB && 2 * a[i] <= minFromB ) {
                                        maxValue = 2 * a[i];
                                        flag = true;
                                        break;
                                }
                        }
                }

                if ( flag == false ) {
                        printf("-1\n");
                        continue;
                }

                printf("%d\n", maxValue);
        }

        return 0;
}
