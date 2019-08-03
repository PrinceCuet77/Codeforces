#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, a, b;
        while ( cin >> a >> b >> n ) {
                int value;
                int i = 1;
                while ( n ) {
                        if ( i % 2 == 1 )
                                n -= __gcd(a, n);
                        else
                                n -= __gcd(b, n);
                        i++;
                }
                if ( i % 2 == 0 ) cout << 0 << endl;
                else cout << 1 << endl;
        }

        return 0;
}

