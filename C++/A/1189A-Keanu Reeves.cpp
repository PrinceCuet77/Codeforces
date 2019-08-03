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
                if ( o != z ) {
                        cout << 1 << endl;
                        cout << ch << endl;
                        continue;
                }
                cout << 2 << endl;
                for ( int i = 0; i < n-1; i++ )
                        cout << ch[i];
                cout << " " << ch[n-1] << endl;
        }

        return 0;
}

