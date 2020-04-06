#include <bits/stdc++.h>
using namespace std;

void solution() {
        int n, m, a, b;
        while ( cin >> n >> m >> a >> b ) {
                if ( m * a <= b )
                        cout << n * a << endl;
                else
                        cout << (n/m) * b + min((n%m) * a, b) << endl;
        }
}

int main()
{
        //freopen("file.txt", "r", stdin);
        solution();

        return 0;
}
