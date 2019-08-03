#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n, k;
        while ( cin >> n >> k ) {
                for ( ll i = 0; i < k; i++ ) {
                        if ( n % 10 == 0 )
                                n /= 10;
                        else
                                n--;
                }

                cout << n << endl;
        }

        return 0;
}

