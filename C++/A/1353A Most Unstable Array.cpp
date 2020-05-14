/*************************************************
*        Author      : Rezoan Shakil Prince      *
*        Institution : CUET                      *
*************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
        ll n, m;
        cin >> n >> m;

        if ( n == 1 ) {
                cout << 0 << endl;
                return;
        }
        else if ( n == 2 ) {
                cout << m << endl;
                return;
        }
        else {
                cout << 2*m << endl;
                return;
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        //freopen("input.txt", "r", stdin);

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
