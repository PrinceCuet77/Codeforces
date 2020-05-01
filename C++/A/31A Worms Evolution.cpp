#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( cin >> n ) {
                int a[n];
                for ( int i = 0; i < n; i++ )
                        cin >> a[i];

                bool flag = false;
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < n; j++ ) {
                                if ( i != j ) {
                                        for ( int k = 0; k < n; k++ ) {
                                                if ( j != k && i != k ) {
                                                        if ( a[i] == (a[j]+a[k]) ) {
                                                                cout << i+1 << " " << j+1 << " " << k+1 << endl;
                                                                flag = true;
                                                                break;
                                                        }
                                                }
                                        }
                                        if ( flag )
                                                break;
                                }
                        }
                        if ( flag )
                                break;
                }

                if ( !flag )
                        cout << -1 << endl;
        }

        return 0;
}
