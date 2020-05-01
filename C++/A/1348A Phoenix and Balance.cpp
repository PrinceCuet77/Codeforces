#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        int tc;
        scanf("%lld", &tc);
        while ( tc-- ) {
                int n;
                scanf("%lld", &n);

                ll p = 2, total1 = 0, total2 = 0;
                for ( ll i = 1; i < n/2; i++, p *= 2 )
                        total1 += p;

                for ( ll i = 1; i <= n/2; i++, p *= 2 )
                        total2 += p;

                total1 += p;

                printf("%lld\n", abs(total1-total2));
        }

        return 0;
}
