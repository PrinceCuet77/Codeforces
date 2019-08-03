#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                vector < string > vec;

                for ( int i = 0; i < m; i++ ) {
                        string ch;
                        cin >> ch;
                        vec.push_back(ch);
                }

                int ans = 0, cnt = 0;
                for ( int i = 0; i < m; i++ ) {
                        bool flag = false;
                        for ( int j = 0; j < n; j++ ) {
                                if ( vec[i][j] == '0' ) {
                                        cnt++;
                                        flag = true;
                                        break;
                                }
                        }
                        if ( !flag ) {
                                if ( ans < cnt )
                                        ans = cnt;
                                cnt = 0;
                        }
                }
                if ( ans < cnt )
                        ans = cnt;
                cout << ans << endl;
        }

        return 0;
}

