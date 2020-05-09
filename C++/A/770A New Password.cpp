#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, k;
        while ( cin >> n >> k ) {
                char ch = 'a';

                while ( n > 0 ) {
                        for ( int i = 0; i < k; i++ ) {
                                cout << (char)((int)ch+i);
                        }

                        n -= k;

                        if ( n - k < 0 )
                                k = min(k, n);
                }
                cout << endl;
        }

        return 0;
}
