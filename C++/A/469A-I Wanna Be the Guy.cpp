#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, p, q;
        while ( cin >> n ) {
                bool check[n+5];
                for ( int i = 1; i <= n; i++ )
                        check[i] = false;

                cin >> p;
                int value;
                for ( int i = 0; i < p; i++ ) {
                        cin >> value;
                        check[value] = true;
                }

                cin >> q;
                for ( int i = 0; i < q; i++ ) {
                        cin >> value;
                        check[value] = true;
                }

                bool flag = false;
                for ( int i = 1; i <= n; i++ ) {
                        if ( check[i] == false ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag ) cout << "Oh, my keyboard!" << endl;
                else cout << "I become the guy." << endl;
        }

        return 0;
}
