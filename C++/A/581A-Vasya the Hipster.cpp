#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int a, b;
        while ( cin >> a >> b ) {
                cout << min(a, b) << " " << (int)(max(a, b) - min(a, b)) / 2 << endl;
        }

        return 0;
}

