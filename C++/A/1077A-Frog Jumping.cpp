#include <bits/stdc++.h>
using namespace std;

/***************************************************
*        NAME       : Rezoan Shakil Prince         *
*        ID         : 1404077                      *
*        University : CUET                         *
*        EMAIL      : prince.cuet.77@gmail.com     *
*        GITHUB     : PrinceCuet77                 *
*        CODEFORCES : rinzler_prince               *
*        UVA        : Prince77                     *
****************************************************/

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n;
        while ( cin >> n ) {
                ll a, b, k;
                for ( ll i = 0; i < n; i++ ) {
                        cin >> a >> b >> k;
                        ll lo = (ll)(k / 2);
                        ll hi = k - lo;
                        ll total = hi * a - lo * b;
                        cout << total << endl;
                }
        }

        return 0;
}

