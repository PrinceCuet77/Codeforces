#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        string ch;
        while ( cin >> ch ) {
                int len = ch.length();
                bool flag = false;
                for ( int i = 0; i < len; i++ ) {
                        if ( ch[i] == 'W' && ch[i+1] == 'U' && ch[i+2] == 'B' ) {
                                i += 2;
                        } else {
                                cout << ch[i];
                                if ( ch[i+1] == 'W' && ch[i+2] == 'U' && ch[i+3] == 'B' ) {
                                        if ( i + 3 != len -1 )
                                                cout << " ";
                                }
                        }
                }
                cout << endl;
        }

        return 0;
}
