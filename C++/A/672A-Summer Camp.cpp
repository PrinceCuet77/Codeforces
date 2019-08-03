#include <bits/stdc++.h>
using namespace std;

string ch;
void solve() {
        ch = "0";
        for ( int i = 1; i <= 9; i++ ) {
                ch += (i + '0');
        }
        for ( int i = 10; i < 100; i++ ) {
                int temp = i;
                int t1 = temp % 10;
                temp /= 10;
                int t2 = temp % 10;
                ch += (t2 + '0');
                ch += (t1 + '0');
        }
        for ( int i = 100; i < 500; i++ ) {
                int temp = i;
                int t1 = temp % 10;
                temp /= 10;
                int t2 = temp % 10;
                temp /= 10;
                int t3 = temp % 10;
                ch += (t3 + '0');
                ch += (t2 + '0');
                ch += (t1 + '0');
        }
}

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        solve();
        while ( cin >> n ) {
                cout << ch[n] << endl;
        }

        return 0;
}

