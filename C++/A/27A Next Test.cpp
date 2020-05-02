#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);

        cin.tie(0);
	ios_base::sync_with_stdio(false);

        int n;
        while ( cin >> n ) {
                vector < bool > v(3005, false);

                for ( int i = 0; i < n; i++ ) {
                        int a;
                        cin >> a;
                        v[a] = true;
                }

                int i;
                for ( i = 1; i < 3001; i++ ) {
                        if ( !v[i] )
                                break;
                }

                cout << i << endl;
        }

        return 0;
}
