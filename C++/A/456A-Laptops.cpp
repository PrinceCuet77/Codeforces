#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                bool flag = false;
                int price[n+5], quality[n+5];
                for ( int i = 0; i < n; i++ )
                        cin >> price[i] >> quality[i];

                for ( int i = 0; i < n; i++ ) {
                        if ( price[i] != quality[i] ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag ) cout << "Happy Alex" << endl;
                else cout << "Poor Alex" << endl;
        }

        return 0;
}

