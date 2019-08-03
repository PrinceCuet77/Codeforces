#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                string ch;
                cin >> ch;
                int z = 0, o = 0;
                for ( int i = 0; i < n; i++ ) {
                        if ( ch[i] == '0' ) z++;
                        else o++;
                }

                cout << abs(z-o) << endl;
        }

        return 0;
}

