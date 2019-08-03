#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int a;
        while ( cin >> a ) {
                int ar[5];
                ar[0] = a;
                cin >> ar[1] >> ar[2] >> ar[3];
                sort(ar, ar+4);
                int maxi = ar[3];
                cout << (maxi - ar[0]) << " " << (maxi - ar[1]) << " " << (maxi - ar[2]) << endl;
        }

        return 0;
}

