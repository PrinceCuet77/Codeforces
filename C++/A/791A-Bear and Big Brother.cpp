#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int m, n;
        while ( cin >> m >> n ) {
                int t = 1, f, s;
                while ( 1 ) {
                        f = m * (int)pow(3, t);
                        s = n * (int)pow(2, t);
                        if ( f > s )
                                break;
                        t++;
                }
                cout << t << endl;
        }

        return 0;
}
