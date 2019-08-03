#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, h;
        while ( cin >> n >> h ) {
                int ar[h+5];
                for ( int i = 0; i < h; i++ )
                        cin >> ar[i];

                sort(ar, ar+h);
                cout << ar[n-1] - ar[0] << endl;
        }

        return 0;
}
