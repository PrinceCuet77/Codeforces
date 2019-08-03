#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                bool ar[m+5], flag = false;
                memset(ar, false, sizeof(ar));

                for ( int i = 0; i < n; i++ ) {
                        int k, value;
                        cin >> k;
                        for ( int j = 0; j < k; j++ ) {
                                cin >> value;
                                ar[value] = true;
                        }
                }

                for ( int i = 1; i <= m; i++ ) {
                        if ( ar[i] == false ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag )
                        cout << "NO" << endl;
                else
                        cout << "YES" << endl;
        }

        return 0;
}

