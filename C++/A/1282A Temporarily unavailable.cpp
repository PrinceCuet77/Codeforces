#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        ll testCase;
        cin >> testCase;

        while ( testCase-- ) {
                ll a, b, c, r;
                cin >> a >> b >> c >> r;

                ll R = c + r;
                ll L = c - r;

                ll st = max(L, min(a, b));
                ll en = min(R, max(a, b));

                cout << abs(b - a) - max(0LL, en - st) << endl;
        }

        return 0;
}
