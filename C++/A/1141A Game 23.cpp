#include <bits/stdc++.h>
using namespace std;

int main()
{
        long long n, m;
        while ( cin >> n >> m ) {
                if ( m % n != 0 ) {
                        cout << -1 << endl;
                        continue;
                }

                long long d = m / n, cnt = 0;

                while ( 1 ) {
                        if ( d % 2 == 0 ) {
                                cnt++;
                                d /= 2;
                        } else
                                break;
                }

                while ( 1 ) {
                        if ( d % 3 == 0 ) {
                                cnt++;
                                d /= 3;
                        } else
                                break;
                }

                if ( d == 1 )
                        cout << cnt << endl;
                else
                        cout << -1 << endl;
        }

        return 0;
}

