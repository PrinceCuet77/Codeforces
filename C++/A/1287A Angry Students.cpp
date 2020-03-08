#include <bits/stdc++.h>
using namespace std;

int main()
{
        int testCase;
        cin >> testCase;

        while ( testCase-- ) {
                int len;
                cin >> len;

                string ch;
                cin >> ch;

                bool flag = false;
                int cnt = 0, ans = -1e5;
                for ( int i = 0; i < len; i++ ) {
                        if ( ch[i] == 'A' && flag == false ) {
                                cnt = 0;
                                flag = true;
                        }
                        if ( flag ) {
                                if ( ch[i] == 'P' )
                                        cnt++;
                                else {
                                        ans = max(ans, cnt);
                                        cnt = 0;
                                }
                        }
                }
                ans = max(ans, cnt);
                cout << ans << endl;
        }

        return 0;
}
