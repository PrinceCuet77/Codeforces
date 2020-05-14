/*************************************************
*        Author      : Rezoan Shakil Prince      *
*        Institution : CUET                      *
*************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
        ll n;
        cin >> n;

        ll t = 8, cnt = 0, cell = (n*n)-1, total = 0;
        while ( cell > 0 ) {
                cnt++;
                cell -= t;
                total += (cnt*t);
                t += 8;
        }

        cout << total << endl;
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        //freopen("input.txt", "r", stdin);

        int tc;
        cin >> tc;
        while ( tc-- ) {
                solve();
        }

        return 0;
}
