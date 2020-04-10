#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ar[n+3];
                for ( int i = 0; i < n; i++ )
                        cin >> ar[i];

                int ans = 100000, diff = -100000, pos = 1;;
                for ( int i = 1; i < n-1; i++ ) {
                        for ( int j = 0; j < n-1; j++ ) {
                                if ( j+1 == pos )
                                        diff = max(diff, ar[pos+1] - ar[j]);
                                else
                                        diff = max(diff, ar[j+1] - ar[j]);
                        }
                        pos++;
                        ans = min(diff, ans);
                        diff = -100000;
                }
                cout << ans << endl;
        }

        return 0;
}
