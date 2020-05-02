#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll total(ll a, ll b) {
        ll sum = 1;
        for ( ll i = 0, t = 1; i < b; i++, t *= 2 )
                sum += t;
        return sum;
}

int main()
{
        //freopen("file.txt", "r", stdin);

        cin.tie(0);
	ios_base::sync_with_stdio(false);

        ll tc;
        cin >> tc;
        while ( tc-- ) {
                ll n;
                cin >> n;

                ll x;
                for ( ll k = 2; k < 30; k++ ) {
                        ll t = total(2, k)-1;
                        if ( n % t == 0 ) {
                                x = n / t;
                                break;
                        }
                }

                cout << x << endl;
        }

        return 0;
}
