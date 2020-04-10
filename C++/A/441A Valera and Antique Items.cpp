#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll n, v;
        while ( cin >> n >> v ) {
                set < ll > result;
                for ( ll i = 0; i < n; i++ ) {
                        ll k, temp;
                        cin >> k;
                        for ( ll j = 0; j < k; j++ ) {
                                cin >> temp;
                                if ( temp < v )
                                        result.insert(i+1);
                        }
                }
                cout << result.size() << endl;
                if ( result.size() == 0 )
                        continue;
                for ( ll x : result )
                        cout << x << " ";
                cout << endl;
        }

        return 0;
}
