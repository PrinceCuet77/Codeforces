#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);

        cin.tie(0);
	      ios_base::sync_with_stdio(false);

        string ch;
        while ( cin >> ch ) {
                string s = "";
                for ( int i = 0; i < ch.length(); i++ ) {
                        if ( ch[i] == '.' )
                                s += '0';
                        else if ( ch[i] == '-' && ch[i+1] == '.' ) {
                                s += '1';
                                i++;
                        }
                        else if ( ch[i] == '-' && ch[i+1] == '-' ) {
                                s += '2';
                                i++;
                        }
                }

                cout << s << endl;
        }

        return 0;
}
