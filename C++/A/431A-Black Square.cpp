#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int ar[10];
        while ( cin >> ar[1] >> ar[2] >> ar[3] >> ar[4] ) {
                string ch;
                cin >> ch;
                int len = ch.length(), sum = 0;
                for ( int i = 0; i < len; i++ ) {
                        int t = ch[i] - '0';
                        sum += ar[t];
                }
                cout << sum << endl;
        }

        return 0;
}

