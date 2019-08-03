#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                int t = min(n, m);
                if ( t % 2 == 0 ) cout << "Malvika" << endl;
                else cout << "Akshat" << endl;
        }

        return 0;
}
