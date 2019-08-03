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

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                for ( int i = 0; i < n; i++ ) {
                        int a, b, c, d;
                        cin >> a >> b >> c >> d;
                        int x = min(a, b);
                        int y = max(c, d);

                        if ( x == y ) {
                                x = max(a, b);
                                y = min(c, d);
                        }
                        cout << x << " " << y << endl;
                }
        }

        return 0;
}

