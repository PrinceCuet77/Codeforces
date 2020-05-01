#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        ll tc;
        cin >> tc;
        while ( tc-- ) {
                ll n;
                cin >> n;

                vector < ll > v;
                for ( int i = 1; i <= n; i *= 2 ) {
                        v.push_back(i);
                        n -= i;
                }

                if ( n > 0 ) {
                        v.push_back(n);
                        sort(v.begin(), v.end());
                }

                cout << v.size()-1 << endl;
                for ( int i = 1; i < v.size(); i++ )
                        cout << v[i] - v[i-1] << " ";
                cout << endl;
        }

        return 0;
}
