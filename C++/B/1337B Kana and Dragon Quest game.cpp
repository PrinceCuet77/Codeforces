#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll t;
        scanf("%lld", &t);
        while ( t-- ) {
                ll h, n, m;
                scanf("%lld %lld %lld", &h, &n, &m);

                if ( h <= 10 & m >= 1 ) {
                        printf("YES\n");
                        continue;
                }

                for ( ll i = 0; i < n; i++ )
                        h = floor(h/2) + 10;

                h -= m * 10;

                if ( h <= 0 )
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
