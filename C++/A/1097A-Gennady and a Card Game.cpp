#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        string ch;
        while ( cin >> ch ) {
                bool flag = false;
                string hand;
                for ( int i = 0; i < 5; i++ ) {
                        cin >> hand;
                        if ( ch[0] == hand[0] || ch[1] == hand[1] )
                                flag = true;
                }

                if ( flag ) cout << "YES" << endl;
                else cout << "NO" << endl;
        }

        return 0;
}

