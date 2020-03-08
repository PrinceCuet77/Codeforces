#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n, m;
        cin >> n >> m;

        string s[n+1], t[m+1];
        for ( int i = 0; i < n; i++ )
                cin >> s[i];

        for ( int i = 0; i < m; i++ )
                cin >> t[i];

        int q;
        cin >> q;
        for ( int i = 0; i < q; i++ ) {
                int temp;
                cin >> temp;
                temp--;

                cout << s[temp%n] + t[temp%m] << endl;
        }

        return 0;
}
