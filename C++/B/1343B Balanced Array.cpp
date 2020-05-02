#include <bits/stdc++.h>
using  namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll t;
        scanf("%lld", &t);
        while ( t-- ) {
                ll n;
                scanf("%lld", &n);

                ll val = n/2;
                if ( val % 2 !=  0 )
                        printf("NO\n");
                else {
                        printf("YES\n");
                        ll sum = 0, t = 2;
                        for ( int i = 1; i <= n/2; i++ ) {
                                printf("%lld ", i*t);
                                sum += i*t;
                        }

                        t = 1;
                        ll v = 0;
                        for ( int i = 1; i <= n/2; i++ ) {
                                if ( i == n/2 )
                                        printf("%lld\n", sum -v);
                                else {
                                        printf("%lld ", t);
                                        v += t;
                                        if ( i+1 != n/2 )
                                                t += 2;
                                }
                        }
                }
        }

        return 0;
}
