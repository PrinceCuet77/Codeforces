#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int d, sum;
        while ( cin >> d >> sum ) {
                int a[d], b[d], totalA = 0, totalB = 0;
                for ( int i = 0; i < d; i++ ) {
                        cin >> a[i] >> b[i];
                        totalA += a[i];
                        totalB += b[i];
                }

                if ( totalA > sum || totalB < sum ) {
                        cout << "NO" << endl;
                        continue;
                }

                cout << "YES" << endl;
                vector < int > v;
                for ( int i = 0; i < d; i++ )
                        v.push_back(a[i]);

                sum -= totalA;

                for ( int i = 0; i < d; i++ ) {
                        if ( sum < 0 )
                                break;
                        int extra = b[i] - a[i];
                        if ( sum - extra < 0 ) {
                                v[i] += min(extra, sum);
                                break;
                        }
                        sum -= extra;
                        v[i] += extra;
                }

                for ( int i = 0; i < d; i++ )
                        cout << v[i] << " ";
                cout << endl;
        }

        return 0;
}
