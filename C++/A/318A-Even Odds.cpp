#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        long long n, m;
        while ( cin >> n >> m ) {
                long long value = n / 2;
                if ( n % 2 == 0 ) {
                        if ( value >= m ) cout << 2 * m - 1 << endl;
                        else cout << 2 * (m - value) << endl;
                } else {
                        value++;
                        if ( value >= m ) cout << 2 * m - 1 << endl;
                        else cout << 2 * (m - value) << endl;
                }
        }

        return 0;
}
