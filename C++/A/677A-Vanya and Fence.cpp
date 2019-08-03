#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, h;
        while ( cin >> n >> h ) {
                int ar[n+5];
                for ( int i = 0; i < n; i++ )
                        cin >> ar[i];

                int sum = 0;
                for ( int i = 0; i < n; i++ ) {
                        if ( h >= ar[i] )
                                sum += 1;
                        else
                                sum += 2;
                }

                cout << sum << endl;
        }

        return 0;
}
