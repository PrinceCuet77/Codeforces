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
                int store25 = 0, store50 = 0, store100 = 0, value;
                bool flag = true;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        if ( i == 0 ) {
                                if ( value == 25 ) store25++;
                                else flag = false;
                                continue;
                        }
                        if ( flag ) {
                                if ( value == 25 ) store25++;
                                else if ( value == 50 ) {
                                        if ( store25 > 0 ) {
                                                store25--;
                                                store50++;
                                        } else flag = false;
                                } else if ( value == 100 ) {
                                        if ( store25 > 0 && store50 > 0 ) {
                                                store25--;
                                                store50--;
                                                store100++;
                                        } else if ( store25 > 2 && store50 == 0 ) {
                                                store25 -= 3;
                                                store100++;
                                        } else flag = false;
                                }
                        }
                }
                if ( flag ) cout << "YES" << endl;
                else cout << "NO" << endl;
        }

        return 0;
}

