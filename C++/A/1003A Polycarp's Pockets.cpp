#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int value, cnt = -1000;
                map < int, int > mp;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        mp[value]++;
                        if ( mp.at(value) > cnt ) cnt = mp.at(value);
                }

                cout << cnt << endl;
        }

        return 0;
}

