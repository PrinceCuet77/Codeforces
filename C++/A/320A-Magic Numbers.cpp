#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        string ch;
        while ( cin >> ch ) {
                int len = ch.length();
                bool flag = true;
                for ( int i = 0; i < len; i++ ) {
                        if ( ch[i] == '1' || (ch[i] == '1' && ch[i+1] == '4') || (ch[i] == '1' && ch[i+1] == '4' && ch[i+2] == '4') ) {
                                if ( ch[i] == '1' && ch[i+1] == '4' && ch[i+2] == '4' ) i += 2;
                                else if ( ch[i] == '1' && ch[i+1] == '4' ) i++;
                        }
                        else flag = false;
                }

                if ( flag ) cout << "YES" << endl;
                else cout << "NO" << endl;
        }

        return 0;
}

