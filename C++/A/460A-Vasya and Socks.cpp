#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                if ( n < m )
                        cout << n << endl;
                else {
                        int day = n, in = m;
                        while ( day >= in ) {
                                day++;
                                in += m;
                        }
                        cout << day << endl;
                }
        }

        return 0;
}

