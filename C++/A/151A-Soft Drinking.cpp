#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, k, l, c, d, p, nl, np;
        while ( cin >> n >> k >> l >> c >> d >> p >> nl >> np ) {
                int t1 = (int)((k * l) / nl);
                int t2 = (c * d);
                t1 = min(t1, t2);
                t2 = (int)(p / np);
                t1 = min(t1, t2);
                cout << (int)(t1/n) << endl;
        }

        return 0;
}

