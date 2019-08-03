#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, k;
        while ( cin >> n >> k ) {
                int total = 0, cnt = 0, value, save = 0;
                bool flag = false;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        if ( value < 8 ) {
                                total += value;
                                int t = 8 - value;
                                if ( t < save ) {
                                        total += t;
                                        save -= t;
                                } else {
                                        total += save;
                                        save = 0;
                                }

                        }
                        else {
                                total += 8;
                                save += (value-8);
                        }
                        if ( total >= k && flag == false ) {
                                cnt = i+1;
                                flag = true;
                        }
                }
                if ( total < k )
                        cout << -1 << endl;
                else
                        cout << cnt << endl;
        }

        return 0;
}

