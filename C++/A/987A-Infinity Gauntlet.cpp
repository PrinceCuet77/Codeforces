#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                bool red = true, purple = true, green = true, blue = true, orange = true, yellow = true;
                int cnt = 0;
                for ( int i = 0; i < n; i++ ) {
                        string ch;
                        cin >> ch;
                        if ( ch == "red" ) red = false, cnt++;
                        else if ( ch == "purple" ) purple = false, cnt++;
                        else if ( ch == "green" ) green = false, cnt++;
                        else if ( ch == "blue" ) blue = false, cnt++;
                        else if ( ch == "orange" ) orange = false, cnt++;
                        else if ( ch == "yellow" ) yellow = false, cnt++;
                }

                cout << 6-cnt << endl;
                if ( red ) cout << "Reality" << endl;
                if ( purple ) cout << "Power" << endl;
                if ( green ) cout << "Time" << endl;
                if ( blue ) cout << "Space" << endl;
                if ( orange ) cout << "Soul" << endl;
                if ( yellow ) cout << "Mind" << endl;
        }

        return 0;
}

