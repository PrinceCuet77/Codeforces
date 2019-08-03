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

ll fact(ll n) {
        if ( n == 1 ) return 1;
        return n * fact(n-1);
}

int main()
{
        //freopen("file.text", "r", stdin);
        ll a, b;
        while ( cin >> a >> b )
                cout << fact(min(a, b)) << endl;

        return 0;
}

