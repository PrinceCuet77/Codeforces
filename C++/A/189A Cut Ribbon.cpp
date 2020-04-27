#include <bits/stdc++.h>
using  namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, a[3];
        while ( scanf("%d %d %d %d", &n, &a[0], &a[1], &a[2]) == 4 ) {
                sort(a, a+3);

                int ans = -1;
                for ( int x = 0; x <= 4000; x++ ) {
                        for ( int y = 0; y <= 4000; y++ ) {
                                int t = (a[0] * x + a[1] * y);
                                t = n - t;

                                if ( t >= 0 && t % a[2] == 0 ) {
                                        int z = t / a[2];
                                        ans = max(ans, x+y+z);
                                }
                        }
                }

                printf("%d\n", ans);
        }


        return 0;
}
