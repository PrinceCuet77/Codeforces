#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( cin >> n ) {
                int a[10];
                for ( int i = 0; i < 7; i++ )
                        cin >> a[i];


                int ans;
                bool flag = false;
                while ( 1 ) {
                        for ( int j = 0; j < 7; j++ ) {
                                n -= a[j];
                                if ( n <= 0 ) {
                                        flag = true;
                                        ans = j+1;
                                        break;
                                }
                        }
                        if ( flag )
                                break;
                }

                cout << ans << endl;
        }

        return 0;
}
