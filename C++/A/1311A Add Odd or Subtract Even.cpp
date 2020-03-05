#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("input.txt", "r", stdin);
        ll testCase;
        cin >> testCase;

        while ( testCase-- ) {
                ll a, b;
                cin >> a >> b;

                if ( a == b ) {
                        cout << 0 << endl;
                        continue;
                } else if ( a < b ) {
                        if ( abs(a-b) % 2 == 0 )
                                cout << 2 << endl;
                        else
                                cout << 1 << endl;
                } else {
                        if ( abs(a-b) % 2 == 0 )
                                cout << 1 << endl;
                        else
                                cout << 2 << endl;
                }
        }

        return 0;
}
