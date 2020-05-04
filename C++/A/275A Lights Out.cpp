#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);

        cin.tie(0);
	      ios_base::sync_with_stdio(false);

        int a[3][3];
        while ( cin >> a[0][0] ) {
                for ( int i = 1; i <= 2; i++ )
                        cin >> a[0][i];

                for ( int i = 1; i <= 2; i++ )
                        for ( int j = 0; j < 3; j++ )
                                cin >> a[i][j];

                cout << (a[0][0] + a[0][1] + a[1][0] + 1) % 2;
                cout << (a[0][0] + a[0][1] + a[0][2] + a[1][1] + 1) % 2;
                cout << (a[0][1] + a[0][2] + a[1][2] + 1) % 2 << endl;

                cout << (a[1][0] + a[0][0] + a[1][1] + a[2][0] + 1) % 2;
                cout << (a[1][0] + a[1][1] + a[1][2] + a[0][1] + a[2][1] + 1) % 2;
                cout << (a[1][2] + a[0][2] + a[2][2] + a[1][1] + 1) % 2 << endl;

                cout << (a[2][0] + a[2][1] + a[1][0] + 1) % 2;
                cout << (a[2][0] + a[2][1] + a[2][2] + a[1][1] + 1) % 2;
                cout << (a[2][2] + a[2][1] + a[1][2] + 1) % 2 << endl;
        }

        return 0;
}
