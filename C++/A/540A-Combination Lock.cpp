#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                string ch1, ch2;
                cin >> ch1 >> ch2;
                int cnt = 0;                for ( int i = 0; i < n; i++ ) {
                        int f = ch1[i] - '0';
                        int s = ch2[i] - '0';
                        int value = abs(s - 9) + f + 1;
                        int v = abs(f-9) + s + 1;
                        value = min(value, v);
                        value = min(value, abs(f-s));
                        cnt += value;
                }
                cout << cnt << endl;
        }

        return 0;
}

