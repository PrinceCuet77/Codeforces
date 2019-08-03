#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n, m;
        while ( cin >> n >> m ) {
                ll ar[m+5];
                for ( ll i = 0; i < m; i++ )
                        cin >> ar[i];

                ll total = ar[0]-1;
                for ( ll i = 1; i < m; i++ ) {
                        if ( ar[i-1] == ar[i] ) continue;
                        else if ( ar[i-1] < ar[i] )
                                total += (ar[i] - ar[i-1]);
                        else
                                total += ((n - ar[i-1]) + ar[i]);
                }

                cout << total << endl;
        }

        return 0;
}

