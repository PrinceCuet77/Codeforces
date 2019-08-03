#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int value, ch = 0, bi = 0, ba = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        if ( i % 3 == 0 ) ch += value;
                        else if ( i % 3 == 1 ) bi += value;
                        else if ( i % 3 == 2 ) ba += value;
                }

                if ( ch > bi && ch > ba ) cout << "chest" << endl;
                else if ( bi > ch && bi > ba ) cout << "biceps" << endl;
                else if ( ba > ch && ba > bi ) cout << "back" << endl;
        }

        return 0;
}

