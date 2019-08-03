#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                string ch;
                map < string, int > mp;
                for ( int i = 0; i < n ; i++ ) {
                        cin >> ch;
                        mp[ch]++;
                        if ( i != 0 ) {
                                if ( mp[ch] > 1 )
                                        cout << ch << mp[ch]-1 << endl;
                                else
                                        cout << "OK" << endl;
                        } else
                                cout << "OK" << endl;
                }
        }

        return 0;
}

