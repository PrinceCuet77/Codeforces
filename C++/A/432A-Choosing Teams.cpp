#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, k;
        while ( cin >> n >> k ) {
                int cnt = 0, value;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        if ( value + k <= 5 ) cnt++;
                }
                cout << (int)(cnt/3) << endl;
        }

        return 0;
}

