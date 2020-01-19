#include <bits/stdc++.h>
using namespace std;

int main()
{
        long long n, x;
        while ( cin >> n >> x ) {
                long long cnt = 0;
                for ( int i = 0; i < n; i++ ) {
                        char ch;
                        long long t;
                        cin >> ch >> t;
                        if ( ch == '-' ) {
                                if ( x >= t )
                                        x -= t;
                                else
                                        cnt++;
                        } else if ( ch == '+' )
                                x += t;
                }

                cout << x << " " << cnt << endl;
        }

        return 0;
}

