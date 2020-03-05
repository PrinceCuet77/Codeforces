#include <bits/stdc++.h>
using namespace std;

int main()
{
        int testCase;
        cin >> testCase;

        while ( testCase-- ) {
                string a, b, c;
                cin >> a >> b >> c;

                bool flag = false;
                for ( int i = 0; i < a.length(); i++ ) {
                        if ( a[i] != c[i] && b[i] != c[i] ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag )
                        cout << "No" << endl;
                else
                        cout << "YES" << endl;
        }

        return 0;
}
