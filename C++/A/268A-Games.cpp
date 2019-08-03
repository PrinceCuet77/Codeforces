#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int h[n+5], a[n+5];
                for ( int i = 0; i < n; i++ )
                        cin >> h[i] >> a[i];

                int cnt = 0;
                for ( int i = 0; i < n-1; i++ ) {
                        for ( int j = i+1; j < n; j++ ) {
                                if ( h[i] == a[j] ) cnt++;
                                if ( h[j] == a[i] ) cnt++;
                        }
                }

                cout << cnt << endl;
        }

        return 0;
}

