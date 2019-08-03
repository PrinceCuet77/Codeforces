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

                bool flag = false;
                int value = ar[0];
                int mod = value % 2;
                int index = 1;
                for ( int i = 1; i < n; i++ ) {
                        if ( ar[i] % 2 != mod ) {
                                if ( i+1 < n ) {
                                        if ( ar[i+1] % 2 != mod ) break;
                                        else index = i+1;
                                } else index = i+1;
                        }

                }
                cout << index << endl;
        }

        return 0;
}
