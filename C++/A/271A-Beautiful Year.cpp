#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int year;
        while ( cin >> year ) {
                bool flag = true;
                while ( flag ) {
                        int start = ++year;
                        int a = start % 10;
                        start /= 10;

                        int b = start % 10;
                        start /= 10;

                        int c = start % 10;
                        start /= 10;

                        int d = start % 10;

                        if ( a != b && a != c && a != d && b != c && b != d && c != d ) {
                                cout << year << endl;
                                break;
                        }
                }
        }

        return 0;
}
