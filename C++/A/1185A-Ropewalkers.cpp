#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll a[5], d;
        while ( cin >> a[0] >> a[1] >> a[2] >> d ) {
                sort(a, a+3);

                ll sum = 0;
                if ( a[1] - a[0] < d ) sum += d - (a[1] - a[0]);
                if ( a[2] - a[1] < d ) sum += d - (a[2] - a[1]);

                cout << sum << endl;
        }

        return 0;
}
