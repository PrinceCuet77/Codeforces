#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int l, a, p;
        while ( cin >> l >> a >> p ) {
                a /= 2;
                p /= 4;
                int t = min(l, a);
                t = min(t, p);

                cout << t + (2 * t) + (4 * t) << endl;
        }

        return 0;
}

