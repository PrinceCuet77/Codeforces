#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int a, b, c;
        while ( cin >> a >> b >> c ) {
                int f = a + b + c;
                int s = (a + b) * c;
                int t = a * b * c;
                int fo = a * (b + c);

                int value = max(f, s);
                value = max(value, t);
                value = max(value, fo);

                cout << value << endl;
        }

        return 0;
}
