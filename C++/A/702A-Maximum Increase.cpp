#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int value, cnt = 0, ck, ans = -1e9;
                cin >> ck;
                ans = ++cnt;
                for ( int i = 1; i < n; i++ ) {
                        cin >> value;
                        if ( ck < value ) cnt++;
                        else cnt = 1;

                        if ( cnt > ans ) ans = cnt;
                        ck = value;
                }

                cout << ans << endl;
        }

        return 0;
}

