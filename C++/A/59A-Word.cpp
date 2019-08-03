#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        string ch;
        while ( cin >> ch ) {
                int len = ch.length(), low = 0, upp = 0;
                for ( int i = 0; i < len; i++ ) {
                        if ( ch[i] >= 'a' && ch[i] <= 'z' ) low++;
                        else upp++;
                }

                if ( upp > low ) {
                        for ( int i = 0; i < len; i++ )
                                cout << (char)toupper(ch[i]);
                        cout << endl;
                } else {
                        for ( int i = 0; i < len; i++ )
                                cout << (char)tolower(ch[i]);
                        cout << endl;
                }
        }

        return 0;
}
