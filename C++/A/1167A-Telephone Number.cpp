#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                for ( int i = 0; i < n; i++ ) {
                        int len;
                        cin >> len;
                        string ch;
                        cin >> ch;
                        if ( len == 11 ) {
                                if ( ch[0] == '8' )
                                        cout << "YES" << endl;
                                else
                                        cout << "NO" << endl;
                        } else if ( len < 11 )
                                cout << "NO" << endl;
                        else {
                                bool flag = false;
                                for ( int j = 0; j < len; j++ ) {
                                        if ( ch[j] == '8' ) {
                                                len -= j;
                                                flag = true;
                                                break;
                                        }
                                }
                                if ( len >= 11 && flag )
                                        cout << "YES" << endl;
                                else
                                        cout << "NO" << endl;
                        }
                }
        }

        return 0;
}

