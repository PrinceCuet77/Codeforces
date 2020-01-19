#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        string ch;
        while ( cin >> ch ) {
                int cnt = 0, other = 0;
                bool flag = false;
                for ( int i = 0; i < ch.length(); i++ ) {
                        if ( ch[i] == 'a' )
                                cnt++;
                        else
                                other++;
                }

                if ( cnt <= other )
                        cout << cnt + (cnt - 1) << "\n";
                else
                        cout << ch.length() << "\n";
        }

        return 0;
}

