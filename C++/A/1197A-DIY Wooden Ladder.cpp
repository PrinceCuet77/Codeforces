#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int t;
        while ( cin >> t ) {
                for ( int i = 0; i < t; i++ ) {
                        int n;
                        cin >> n;
                        int ar[n+5];
                        for ( int i = 0; i < n; i++ )
                                cin >> ar[i];

                        if ( n == 2 ) {
                                cout << 0 << endl;
                                continue;
                        }
                        sort(ar, ar+n);
                        if ( ar[n-1] < 2 || ar[n-2] < 2 ) {
                                cout << 0 << endl;
                                continue;
                        }
                        int mini = min(ar[n-1], ar[n-2]) - 1;
                        int rem = n - 2;
                        cout << min(mini, rem) << endl;
                }
        }

        return 0;
}
