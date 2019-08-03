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
        char ch;
        while ( cin >> ch ) {
                int m = ch == 'R' ? 1 : -1;
                string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", text;
                cin >> text;
                int len = text.length();
                for ( int i = 0; i < len; i++ )
                        cout << keyboard[keyboard.find(text[i])-m];
                cout << endl;
        }

        return 0;
}

