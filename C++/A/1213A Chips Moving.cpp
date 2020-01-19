#include <bits/stdc++.h>
using namespace std;

int main()
{
        long long n;
        while ( cin >> n ) {
                long long cnt = 0;
                for ( long long i = 0; i < n; i++ ) {
                        long long x;
                        cin >> x;
                        cnt += (x & 1);
                }

                cout << min(cnt, n-cnt) << endl;
        }

        return 0;
}

