#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        string ch;
        int l = 0, u = 0;
        for ( int i = 0; i < 8; i++ ) {
                cin >> ch;
                int len = ch.length();
                for ( int j = 0; j < len; j++ ) {
                        if ( ch[j] >= 'a' && ch[j] <= 'z' ) {
                                if ( ch[j] == 'q' ) l += 9;
                                else if ( ch[j] == 'r' ) l += 5;
                                else if ( ch[j] == 'b' || ch[j] == 'n' ) l += 3;
                                else if ( ch[j] == 'p' ) l++;
                        } else {
                                if ( ch[j] == 'Q' ) u += 9;
                                else if ( ch[j] == 'R' ) u += 5;
                                else if ( ch[j] == 'B' || ch[j] == 'N' ) u += 3;
                                else if ( ch[j] == 'P' ) u++;
                        }
                }
        }
        if ( l == u ) cout << "Draw" << endl;
        else if ( l > u ) cout << "Black" << endl;
        else cout << "White" << endl;

        return 0;
}

