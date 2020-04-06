#include <bits/stdc++.h>
using namespace std;

void solution() {
        int n, d;
        while ( cin >> n >> d ) {
                int ar[n+1], sum = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> ar[i];
                        sum += ar[i];
                }

                int eventGone = (n-1) * 10 + sum;
                if ( eventGone <= d ) {
                        cout << 2 * (n-1) + (d-eventGone) / 5 << endl;
                } else
                        cout << -1 << endl;
        }
}

int main()
{
        //freopen("file.txt", "r", stdin);
        solution();

        return 0;
}
