#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int total = 0, temp = 0, cnt = 1, ans;
                while ( 1 ) {
                        temp += cnt;
                        total += temp;
                        if ( total == n ) {
                                ans = cnt;
                                break;
                        }
                        if ( total > n ) {
                                ans = --cnt;
                                break;
                        }
                        cnt++;
                }
                cout << ans << endl;
        }

        return 0;
}

