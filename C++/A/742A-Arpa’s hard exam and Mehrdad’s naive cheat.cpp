#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n;
        while ( cin >> n ) {
                if ( n == 0 ) {
                        cout << 1 << endl;
                        continue;
                } else {
                        ll t = n % 4;
                        if ( t == 0 ) cout << 6 << endl;
                        else if ( t == 1 ) cout << 8 << endl;
                        else if ( t == 2 ) cout << 4 << endl;
                        else if ( t == 3 ) cout << 2 << endl;
                }
        }

        return 0;
}

