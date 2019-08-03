#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        string ch1, ch2, ch3;
        while ( cin >> ch1 >> ch2 >> ch3 ) {
                ch1 += ch2;
                if ( ch1.size() == ch3.size() ) {
                        sort(ch1.begin(), ch1.end());
                        sort(ch3.begin(), ch3.end());

                        if ( ch1 == ch3 ) cout << "YES" << endl;
                        else cout << "NO" << endl;
                } else
                        cout << "NO" << endl;
        }

        return 0;
}

