#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, k;
        while ( cin >> n >> k ) {
                int ar[n+5];
                int value;
                cin >> value;
                vector < int > vec;
                for ( int i = 1; i < n; i++ ) {
                        cin >> ar[i];
                        vec.push_back(ar[i] - value);
                        value = ar[i];
                }

                sort(vec.begin(), vec.end());
                int ans = 0;
                for ( int i = 0; i < n-k; i++ )
                        ans += vec.at(i);
                cout << ans << endl;
        }

        return 0;
}
