#include <bits/stdc++.h>
using namespace std;

void solution() {
        int n, m;
        cin >> n >> m;

        int ar[m+2];
        for ( int i = 0; i < m; i++ )
                cin >> ar[i];

        sort(ar, ar+m);

        int ans = ar[n-1] - ar[0];
        for ( int i = 0; i+n <= m; i++ ) {
                int diff = ar[n+i-1] - ar[i];
                ans = min(diff, ans);
        }

        cout << ans << endl;
}

int main()
{
        //freopen("file.txt", "r", stdin);
        solution();

        return 0;
}
