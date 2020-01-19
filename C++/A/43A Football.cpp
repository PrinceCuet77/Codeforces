#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        while ( cin >> n ) {
                string ch;
                map < string, int > mp;
                for ( int i = 0; i < n; i++ ) {
                        cin >> ch;
                        mp[ch]++;
                }

                string name;
                int highest = -10000;
                for ( auto x : mp ) {
                     if ( x.second > highest ) {
                        highest = x.second;
                        name = x.first;
                     }
                }

                cout << name << endl;
        }

        return 0;
}

