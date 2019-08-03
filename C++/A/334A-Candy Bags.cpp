#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int sq = n * n;
                vector < int > vec[n+1];
                int a = 1, b = n;
                for ( int i = 1; i <= n/2; i++ ) {
                        for ( int j = a, k = 1; j <= b; j++, k++ )
                                vec[k].push_back(j);
                        a += (2 * n);
                        b += (2 * n);
                }

                a = 2 * n, b = n + 1;
                for ( int i = 0; i < n/2; i++ ) {
                        for ( int j = a, k = 1; j >= b; j--, k++ )
                                vec[k].push_back(j);
                        a += (2 * n);
                        b += (2 * n);
                }

                for ( int i = 1; i <= n; i++ ) {
                        for ( int j = 0; j < vec[i].size(); j++ )
                                cout << vec[i][j] << " ";
                        cout << endl;
                }
        }

        return 0;
}

