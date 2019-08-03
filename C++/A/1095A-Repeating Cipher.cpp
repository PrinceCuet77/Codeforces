#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                string ch, res = "";
                cin >> ch;
                int cnt = 0;
                for ( int i = 0; i < n; i++ ) {
                        res += ch[i];
                        i += cnt;
                        cnt++;
                }

                cout << res << endl;
        }

        return 0;
}

