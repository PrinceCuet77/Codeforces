#include <bits/stdc++.h>
using namespace std;

void solution() {
        int n, m;
        while ( cin >> n >> m ) {
                bool flag = false;
                for ( int i = (n+1)/2; i <= n; i++ ) {
                        if ( i % m == 0 ) {
                                cout << i << endl;
                                flag = true;
                                break;
                        }
                }
                if ( !flag )
                        cout << -1 << endl;
        }
}

int main()
{
        //freopen("file.txt", "r", stdin);
        solution();

        return 0;
}
