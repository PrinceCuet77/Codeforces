#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        long long l, r;
        while ( cin >> l >> r) {
                if ( r-l+1 < 3 ) {
                        cout << -1 << endl;
                        continue;
                }

                if ( l % 2 == 0 ) {
                        cout << l << " " << l+1 << " " << l+2 << endl;
                        continue;
                }

                if ( r-l+1 > 3 ) {
                        cout << l+1 << " " << l+2 << " " << l+3 << endl;
                        continue;
                }

                cout << -1 << endl;
        }

        return 0;
}
