#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int a[n+5], big = 0, small = 1000, indexBig, indexSmall;
                for ( int i = 1; i <= n; i++ ) {
                        cin >> a[i];
                        if ( big < a[i] ) {
                                big = a[i];
                                indexBig = i;
                        }
                        if ( small >= a[i] ) {
                                small = a[i];
                                indexSmall = i;
                        }
                }

                if ( indexSmall > indexBig )
                        cout << (abs(indexBig - 1) + abs(n - indexSmall)) << endl;
                else
                        cout << (abs(n - indexSmall) + abs(indexBig - 1)) - 1 << endl;
        }

        return 0;
}
