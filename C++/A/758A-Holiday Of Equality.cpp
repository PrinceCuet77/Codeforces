#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ar[n+5], value = -100;
                for ( int i = 0; i < n; i++ ) {
                        cin >> ar[i];
                        value = max(value, ar[i]);
                }
                long long sum = 0;
                for ( int i = 0; i < n; i++ )
                        sum += (value - ar[i]);
                cout << sum << endl;
        }

        return 0;
}

