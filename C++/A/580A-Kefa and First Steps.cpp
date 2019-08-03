#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ar[n+5];
                for ( int i = 0; i < n; i++ )
                        cin >> ar[i];

                int length = 0, value = ar[0], temp = 0;
                for ( int i = 0; i < n; i++ ) {
                        if ( value <= ar[i] ) temp++;
                        else {
                                temp = 0;
                                temp++;
                        }
                        value = ar[i];

                        if ( length < temp )
                                length = temp;
                }

                cout << length << endl;
        }

        return 0;
}
