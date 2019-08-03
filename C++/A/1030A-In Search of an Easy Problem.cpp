#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, value;
        while ( cin >> n ) {
                bool flag = false;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        if ( value == 1 )
                                flag = true;
                }
                if ( !flag ) cout << "EASY" << endl;
                else cout << "HARD" << endl;
        }

        return 0;
}

