#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( cin >> n ) {

                map < int, int > mp;
                for ( int i = 0; i < n; i++ ) {
                        int a;
                        cin >> a;
                        mp[a]++;
                }

                int t = mp[5] / 9;

                if ( mp[0] == 0 ) {
                        cout << -1 << endl;
                        continue;
                }

                for ( int i = 0; i < t; i++ )
                        cout << "555555555";

                if ( t == 0 )
                        cout << 0 << endl;
                else {
                        for ( int i = 0; i < mp[0]; i++ )
                                cout << "0";
                        cout << endl;
                }
        }

        return 0;
}
