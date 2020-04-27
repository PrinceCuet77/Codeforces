#include <bits/stdc++.h>
using  namespace std;

typedef long long ll;

ll p(ll k, ll i) {
        ll sum = 1;
        for ( ll n = 0; n < i; n++ )
                sum *= k;
        return sum;
}

int main()
{
        //freopen("file.txt", "r", stdin);
        ll k;
        while ( scanf("%lld", &k) == 1 ) {
                ll l;
                scanf("%lld", &l);

                bool flag = false;
                ll i = 1, t = k;
                while ( 1 ) {
                        if ( t == l ) {
                                flag = true;
                                break;
                        }
                        if ( t > l )
                                break;
                        i++;
                        t = p(k, i);
                }

                if ( flag )
                        printf("YES\n%lld\n", i-1);
                else
                        printf("NO\n");
        }


        return 0;
}
