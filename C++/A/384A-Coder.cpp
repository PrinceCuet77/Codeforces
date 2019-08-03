#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                if ( n % 2 == 0 )
                        cout << n * (int)(n/2) << endl;
                else {
                        int l = n/2;
                        int r = n - l;
                        cout << (r * r) + (l * l) << endl;
                }

                int v = 0;
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < n; j++ ) {
                                if ( j % 2 == v ) cout << "C";
                                else cout << ".";
                        }
                        v = v ? 0 : 1;
                        cout << endl;
                }
        }

        return 0;
}

