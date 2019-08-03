#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll s, n;
        while ( cin >> s >> n ) {
                ll x, y;
                vector <  pair < ll, ll > > vec;
                for ( ll i = 0; i < n; i++ ) {
                        cin >> x >> y;
                        vec.push_back(make_pair(x, y));
                }

                sort(vec.begin(), vec.end());

                bool flag = true;
                for ( ll i = 0; i < n; i++ ) {
                        if ( s > vec[i].first )
                                s += vec[i].second;
                        else {
                                flag = false;
                                break;
                        }
                }

                if ( flag ) cout << "YES" << endl;
                else cout << "NO" << endl;
        }

        return 0;
}

