#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll y, k, n;
        while ( scanf("%lld %lld %lld", &y, &k, &n) == 3 ) {
                if ( y >= n ) {
                        printf("-1\n");
                        continue;
                }

                if ( (y + (k - y % k)) > n ) {
                        printf("-1\n");
                        continue;
                }

                ll t = (k - y % k);
                printf("%lld ", t);
                y += t;
                while ( 1 ) {
                        y += k;
                        if ( y > n )
                                break;
                        t += k;
                        printf("%lld ", t);
                }
                printf("\n");
        }

        return 0;
}
