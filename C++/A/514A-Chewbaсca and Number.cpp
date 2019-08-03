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
        string ch;
        while ( cin >> ch ) {
                int len = ch.length();
                for ( int i = 0; i < len; i++ ) {
                        int t = ch[i] - '0';
                        t = min((9-t), t);
                        if ( i == 0 && t == 0 )
                                t = ch[i] - '0';
                        cout << t;
                }
                cout << endl;
        }

        return 0;
}

