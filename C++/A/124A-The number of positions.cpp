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
        std::ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n, a, b;
        while ( cin >> n >> a >> b )
                cout << n - max(a+1, n-b) + 1 << endl;

        return 0;
}

