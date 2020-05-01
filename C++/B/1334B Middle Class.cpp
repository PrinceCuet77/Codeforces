#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll t;
        scanf("%lld", &t);
        while ( t-- ) {
                ll n, x;
                scanf("%lld %lld", &n, &x);

                ll a[n], sum = 0;
                for ( ll i = 0; i < n; i++ ) {
                        scanf("%lld", &a[i]);
                        a[i] -= x;
                        sum += a[i];
                }

                if ( sum >= 0 ) {
                        printf("%lld\n", n);
                        continue;
                }

                sort(a, a+n);
                ll ans = 0;
                for ( ll i = 0; i < n; i++ ) {
                        sum -= a[i];
                        if ( sum >= 0 ) {
                                ans = n-i-1;
                                break;
                        }
                }

                printf("%lld\n", ans);
        }

        return 0;
}
