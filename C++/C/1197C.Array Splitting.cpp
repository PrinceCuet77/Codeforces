#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ar[n+5], k;
                for ( int i = 0; i < n; i++ ) {
                        cin >> ar[i];
                        if ( ar[i] == n )
                                k = i;
                }
                int p = k-1, q = k+1, r = n-1;

                while ( 1 ) {
                        if ( p >= 0 && ar[p] == r ) {
                                r--;
                                p--;
                                continue;
                        }
                        if ( q < n && ar[q] == r ) {
                                r--;
                                q++;
                                continue;
                        }
                        break;
                }

                if ( !r )
                        cout << "YES" << endl;
                else
                        cout << "NO" << endl;

        }

        return 0;
}
