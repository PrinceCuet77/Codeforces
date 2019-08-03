#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n, c;
        while ( cin >> n >> c ) {
                ll a, b, cnt = 0;
                cin >> a;
                for ( ll i = 0; i < n-1; i++ ) {
                        cin >> b;
                        if ( b - a <= c ) cnt++;
                        else cnt = 0;
                        a = b;
                }
                cout << ++cnt << endl;
        }

        return 0;
}

