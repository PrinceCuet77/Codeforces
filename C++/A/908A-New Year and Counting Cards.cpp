#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        string ch;
        while ( cin >> ch ) {
                int len = ch.length(), cnt = 0;
                for ( int i = 0; i < len; i++ ) {
                        if ( ch[i] >= 'a' && ch[i] <= 'z' ) {
                                if ( ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' )
                                        cnt++;
                        } else {
                                int value = ch[i] - '0';
                                if ( value % 2 == 1 )
                                        cnt++;
                        }
                }
                cout << cnt << endl;
        }

        return 0;
}

