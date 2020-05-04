#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int k;
        while ( cin >> k ) {
                string ch;
                cin >> ch;

                map < char, int > mp;
                for ( int i = 0; i < ch.length(); i++ )
                        mp[ch[i]]++;

                bool flag = false;
                for ( auto x : mp ) {
                        if ( x.second % k != 0 ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag )
                        cout << -1 << endl;
                else {
                        string s;
                        for ( auto x : mp ) {
                                int t = x.second / k;
                                for ( int i = 0; i < t; i++ )
                                        s += x.first;
                        }

                        for ( int i = 0; i < k; i++ )
                                cout << s;
                        cout << endl;
                }
        }

        return 0;
}
