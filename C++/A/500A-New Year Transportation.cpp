#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, t;
        while ( cin >> n >> t ) {
                int ar[n+5], index = 1;
                for ( int i = 1; i <= n; i++ )
                        cin >> ar[i];

                bool flag = false;
                for ( int i = 1; i <= n; i++ ) {
                        index += ar[i];
                        i = index - 1;
                        if ( index == t && index <= n ) {
                                flag = true;
                                break;
                        }
                        if ( index > t ) break;
                }
                if ( flag ) cout << "YES" << endl;
                else cout << "NO" << endl;
        }

        return 0;
}

