#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n;
        while ( cin >> n ) {
                for ( ll i = 0; i < n; i++ ) {
                        ll value;
                        cin >> value;
                        ll cnt = 0;
                        bool flag = true;
                        while ( 1 ) {
                                if ( value == 1 ) break;
                                if ( value % 2 == 0 ) {
                                        value /= 2;
                                        cnt++;
                                } else if ( value % 3 == 0 ) {
                                        value = 2 * value;
                                        value /= 3;
                                        cnt++;
                                } else if ( value % 5 == 0 ) {
                                        value = 4 * value;
                                        value /= 5;
                                        cnt++;
                                } else {
                                        flag = false;
                                        break;
                                }
                        }
                        if ( flag == false ) {
                                cout << -1 << endl;
                                continue;
                        }
                        cout << cnt << endl;
                }
        }

        return 0;
}

