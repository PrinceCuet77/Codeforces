#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                int cnt = 0;
                for ( int i = 0; i < 1001; i++ ) {
                        for ( int j = 0; j < 1001; j++ ) {
                                int t1 = i * i + j;
                                int t2 = i + j * j;

                                if ( t1 == n && t2 == m )
                                        cnt++;
                        }
                }

                cout << cnt << endl;
        }

        return 0;
}
