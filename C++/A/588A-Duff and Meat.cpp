#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int a, p, total = 1e9, price = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> a >> p;
                        total = min(total, p);
                        price += total * a;
                }
                cout << price << endl;
        }

        return 0;
}

