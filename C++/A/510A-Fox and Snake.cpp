#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                int rowCount = 1;
                for ( int i = 1; i <= n; i++ ) {
                        if ( i % 2 == 1 )
                                for ( int j = 1; j <= m; j++ ) cout << "#";
                        else {
                                if ( rowCount % 2 == 1 ) {
                                        for ( int j = 1; j <= m; j++ ) {
                                                if ( j == m ) cout << "#";
                                                else cout << ".";
                                        }
                                        rowCount++;
                                } else {
                                        for ( int j = 1; j <= m; j++ ) {
                                                if ( j == 1 ) cout << "#";
                                                else cout << ".";
                                        }
                                        rowCount++;
                                }
                        }
                        cout << endl;
                }
        }

        return 0;
}

