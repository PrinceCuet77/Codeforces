#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll x, y, z;
        while ( cin >> x >> y >> z ) {
                ll coco = (x/z) + (y/z);
                x %= z;
                y %= z;

                if ( x + y == z ) cout << ++coco << " " << min(x, y) << endl;
                else if ( x + y > z ) cout << ++coco << " " << z-max(x, y) << endl;
                else cout << coco << " 0" << endl;
        }

        return 0;
}

