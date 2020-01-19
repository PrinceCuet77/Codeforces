#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n, m;
        while ( cin >> n >> m ) {
                string ch1, ch2, temp;
                map < string, string > mp;
                for ( int i = 0; i < m; i++ ) {
                        cin >> ch1 >> ch2;
                        if ( ch1.length() <= ch2.length() )
                                temp = ch1;
                        else
                                temp = ch2;

                        mp[ch1] = temp;
                        mp[ch2] = temp;
                }

                for ( int i = 0; i < n; i++ ) {
                        cin >> ch1;
                        cout << mp[ch1] << " ";
                }
                cout << endl;
        }

        return 0;
}

