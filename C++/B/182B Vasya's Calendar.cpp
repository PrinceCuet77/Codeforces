#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll d;
        while ( cin >> d ) {
                ll n, cnt = 0;
                cin >> n;
                for ( int i = 0; i < n; i++ ) {
                        ll a;
                        cin >> a;
                        if ( i != (n-1) )
                                cnt += (d-a);
                }

                cout << cnt << endl;
        }

        return 0;
}
