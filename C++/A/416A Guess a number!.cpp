#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll n;
        while ( scanf("%lld", &n) == 1 ) {
                ll mx = 2e9;
                ll mn = -mx;

                for ( int i = 0; i < n; i++ ) {
                        string sign;
                        char ch;
                        ll x;

                        cin >> sign;
                        scanf("%lld %c", &x, &ch);

                        if ( ch == 'N' ) {
                                if ( sign == ">=" ) sign = "<";
                                else if ( sign == "<=" ) sign = ">";
                                else if ( sign == ">" ) sign = "<=";
                                else sign = ">=";
                        }

                        if ( sign == ">=" ) mn = max(mn, x);
                        else if ( sign == ">" ) mn = max(mn, x+1);
                        else if ( sign == "<" ) mx = min(mx, x-1);
                        else mx = min(mx, x);
                }

                if ( mn <= mx ) printf("%lld\n", mn);
                else printf("Impossible\n");
        }

        return 0;
}
