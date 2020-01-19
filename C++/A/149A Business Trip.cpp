#include <bits/stdc++.h>
using namespace std;

int main()
{
        int k;
        vector < int > h;

        while ( cin >> k ) {
                for ( int i = 0; i < 12; i++ ) {
                        int temp;
                        cin >> temp;
                        h.push_back(temp);
                }

                if ( k == 0 ) {
                        cout << k << endl;
                        continue;
                }

                sort(h.rbegin(), h.rend());

                int t = 0, cnt = 0;
                for ( int i = 0; i < 12; i++ ) {
                        t += h[i];
                        cnt++;
                        if ( t >= k )
                                break;
                }

                if ( t < k )
                        cout << -1 << endl;
                else
                        cout << cnt << endl;
        }

        return 0;
}

