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

void solve() {
        int n;
        cin >> n;

        int a[n];
        for ( int i = 0; i < n; i++ )
                cin >> a[i];

        sort(a, a+n);
        int cnt = 0, ans = 0;
        for ( int i = 0; i < n; i++ ) {
                if ( ++cnt == a[i] ) {
                        ans++;
                        cnt = 0;
                }
        }

        cout << ans << endl;
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
