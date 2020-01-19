#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n, x, a, b, testCase;
        cin >> testCase;

        while ( testCase-- ) {
                cin >> n >> x >> a >> b;

                int diff;
                if ( a > b ) diff = a - b;
                else diff = b - a;

                if ( diff + x < n )
                        cout << diff + x << endl;
                else
                        cout << --n << endl;
        }

        return 0;
}

