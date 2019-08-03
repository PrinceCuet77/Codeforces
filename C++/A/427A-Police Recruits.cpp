#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int value, man = 0, cnt = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        if ( value == -1 ) {
                                if ( man == 0 ) cnt++;
                                else man += value;
                        } else
                                man += value;
                }
                cout << cnt << endl;
        }

        return 0;
}

