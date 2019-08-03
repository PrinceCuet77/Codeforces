#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                string ch[n+4];
                for ( int i = 0; i < n; i++ )
                        cin >> ch[i];

                int cnt = 1;
                string ck = ch[0];
                for ( int i = 1; i < n; i++ ) {
                        if ( ck != ch[i] ) {
                                cnt++;
                                ck = ch[i];
                        }
                }

                cout << cnt << endl;
        }

        return 0;
}
