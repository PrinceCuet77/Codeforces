#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int T;
        while ( cin >> T ) {
                for ( int i = 0; i < T; i++ ) {
                        int n, t, s;
                        cin >> n >> s >> t;\

                        cout << max(n-s, n-t)+1 << endl;
                }
        }

        return 0;
}
