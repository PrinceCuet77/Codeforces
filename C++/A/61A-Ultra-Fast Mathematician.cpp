#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        string ch1, ch2;
        while ( cin >> ch1 >> ch2 ) {
                int len = ch1.length();

                for ( int i = 0; i < len; i++ ) {
                        if ( (ch1[i] == '0' && ch2[i] == '0') || (ch1[i] == '1' && ch2[i] == '1') )
                                cout << "0";
                        else
                                cout << "1";
                }
                cout << endl;
        }

        return 0;
}
