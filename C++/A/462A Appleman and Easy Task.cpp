#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( cin >> n ) {
                string s, store = "", res;
                for ( int i = 0; i < n; i++ ) {
                        cin >> s;
                        store += s;
                }
                res = store;
                reverse(res.begin(), res.end());
                if ( store == res )
                        cout << "YES" << endl;
                else
                        cout << "NO" << endl;
        }

        return 0;
}
