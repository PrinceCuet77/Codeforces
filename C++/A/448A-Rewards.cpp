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
        int ar[5];
        while ( cin >> ar[0] >> ar[1] >> ar[2] ) {
                double cup = 0.0, medel = 0.0;
                int n;
                cup = ar[0] + ar[1] + ar[2];
                for (int i = 0; i < 3; i++ ) {
                        cin >> ar[i];
                        medel += ar[i];
                }
                cin >> n;
                int t = ceil(cup / 5.0);
                n -= t;
                t = ceil(medel / 10.0);
                n -= t;

                if ( n < 0 ) cout << "NO" << endl;
                else cout << "YES" << endl;
        }

        return 0;
}

