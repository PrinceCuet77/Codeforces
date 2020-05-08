#include <bits/stdc++.h>
using namespace std;

int main()
{
        freopen("file.txt", "r", stdin);
        int tc;
        cin >> tc;
        while ( tc-- ) {
                 int n, m;
                 cin >> n >> m;

                 if ( n == 1 || m == 1 || (m == 2 && n == 2) )
                        cout << "yes" << endl;
                 else
                        cout << "no" << endl;
        }

        return 0;
}
