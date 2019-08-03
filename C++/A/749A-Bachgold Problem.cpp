#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ha = (int)(n/2);
                cout << ha << endl;
                if ( n % 2 == 0 ) {
                        for ( int i = 0; i < ha; i++ )
                                cout << 2 << " ";
                        cout << endl;
                } else {
                        cout << 3 << " ";
                        for ( int i = 1; i < ha; i++ )
                                cout << 2 << " ";
                        cout << endl;
                }
        }

        return 0;
}
