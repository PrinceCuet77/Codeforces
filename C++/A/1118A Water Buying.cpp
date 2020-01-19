#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        ll tc, n, a, b;
        while ( cin >> tc ) {
                for ( ll i = 0; i < tc; i++ ) {
                        cin >> n >> a >> b;
                        ll t1 = n * a;
                        ll t2 = (ll)(n/2);
                        if ( n % 2 == 0 )
                                t2 = t2 * b;
                        else
                                t2 = t2 * b + a;

                        cout << min(t1, t2) << "\n";
                }
        }

        return 0;
}

