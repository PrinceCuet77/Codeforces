#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll cards(ll h) {
        return (3 * h * h + h) / 2;
}

int main()
{
        //freopen("file.txt", "r", stdin);
        ll tc;
        cin >> tc;
        while ( tc-- ) {
                 ll n;
                 cin >> n;

                 ll h = 0;
                 while ( cards(h) <= n )
                        h++;

                 ll ans = 0;
                 while ( h > 0 ) {
                        while ( cards(h) <= n ) {
                                n -= cards(h);
                                ans++;
                        }
                        h--;
                 }

                 cout << ans << endl;
        }

        return 0;
}
