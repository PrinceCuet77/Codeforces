#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ar[n+5];
                for ( int i = 0; i < n; i++ ) {
                        cin >> ar[i];
                        if ( ar[i] % 2 == 0 ) ar[i]--;
                        cout << ar[i] << " ";
                }
                cout << endl;
        }

        return 0;
}

