#include <bits/stdc++.h>
using namespace std;

int main()
{
        freopen("file.txt", "r", stdin);
        int tc;
        cin >> tc;
        while ( tc-- ) {
                string ch;
                cin >> ch;

                set < char > s;
                for ( int i = 0; i < ch.length(); i++ )
                        s.insert(ch[i]);

                if ( s.size() == 1 ) {
                        cout << ch << endl;
                        continue;
                }

                for ( int i = 0; i < 2*ch.length(); i += 2 )
                        cout << "10";
                cout << endl;
        }

        return 0;
}
