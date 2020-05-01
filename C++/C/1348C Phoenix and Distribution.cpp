#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll tc;
        cin >> tc;
        while ( tc-- ) {
                ll n, k;
                cin >> n >> k;

                string s;
                cin >> s;

                sort(s.begin(), s.end());

                if ( s[0] != s[k-1] ) {
                        cout << s[k-1] << endl;
                        continue;
                }

                cout << s[0];
                if ( s[k] != s[n-1] ) {
                        for ( int i = k; i < n; i++ )
                                cout << s[i];
                        cout << endl;
                        continue;
                }

                for ( int i = 0; i < (n-1)/k; i++ )
                        cout << s[n-1];
                cout << endl;
        }

        return 0;
}
