/********************************************************************************
*                                                                               *
*        Author     : Rezoan Shakil Prince                                      *
*        Batch      : 14                                                        *
*        Email      : prince.cuet.77@gmail.com                                  *
*        University : Chittagong University of Engineering and Technology       *
*                                                                               *
********************************************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if ( a <= b ) {
                cout << b << endl;
                return;
        }
        if ( d >= c ) {
                cout << -1 << endl;
                return;
        }
        ll sum = b;
        ll t = (a-b) / (c-d);
        if ( ((a-b) % (c-d)) != 0 )
                t++;

        sum += (t * c);

        cout << sum << endl;
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        freopen("input.txt", "r", stdin);

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
