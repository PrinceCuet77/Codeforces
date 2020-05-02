#include <bits/stdc++.h>
using  namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll tc;
        scanf("%lld", &tc);
        while ( tc-- ) {
                ll x, y, a, b;
                scanf("%lld %lld", &x, &y);
                scanf("%lld %lld", &a, &b);

                ll t = abs(x-y);
                ll m = min(x, y);

                ll second = t * a + b * m;

                ll first = a * (x + y);

                printf("%lld\n", min(first, second));
        }

        return 0;
}
