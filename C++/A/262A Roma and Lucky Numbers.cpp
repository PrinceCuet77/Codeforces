#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll n, k;
        while ( cin >> n >> k ) {
                ll value, cnt = 0;
                for ( ll i = 0; i < n; i++ ) {
                        cin >> value;
                        ll take = 0;
                        while ( value ) {
                                ll temp = value % 10;
                                if ( temp == 4 || temp == 7 )
                                        take++;
                                value /= 10;
                        }
                        if ( take <= k )
                                cnt++;
                }
                cout << cnt << endl;
        }

        return 0;
}
