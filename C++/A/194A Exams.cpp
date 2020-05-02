#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);

        cin.tie(0);
	ios_base::sync_with_stdio(false);

        int n, k;
        while ( cin >> n >> k ) {
                if ( 3*n <= k )
                        cout << 0 << endl;
                else
                        cout << 3*n-k << endl;


        }

        return 0;
}
