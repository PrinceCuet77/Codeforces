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
        ll d1, d2, d3;
        while ( cin >> d1 >> d2 >> d3 ) {
                ll t1 = d1 + d2 + d3;
                ll t2 = 2 * d1 + 2 * d2;
                t1 = min(t1, t2);
                t2 = 2 * d1 + 2 * d3;
                t1 = min(t1, t2);
                t2 = 2 * d2 + 2 * d3;

                cout << min(t1, t2) << endl;
        }

        return 0;
}

