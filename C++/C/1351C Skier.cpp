#include <bits/stdc++.h>
using namespace std;

int main()
{
        freopen("file.txt", "r", stdin);
        int tc;
        cin >> tc;
        while ( tc-- ) {
                string ch;
                cin >> ch;

                map < pair < int, int >, int > x, y;
                int tx = 0, ty = 0, cnt = 0;

                for ( char c : ch ) {
                        if ( c == 'N' ) {
                                if ( y[{tx, ty+1}] == 0 ) {
                                        cnt += 5;
                                        y[{tx, ty+1}] = 1;
                                }
                                else
                                        cnt += 1;
                                ty++;
                        }
                        else if ( c == 'S' ) {
                                if ( y[{tx, ty}] == 0 ) {
                                        cnt += 5;
                                        y[{tx, ty}] = 1;
                                }
                                else
                                        cnt += 1;
                                ty--;
                        }
                        else if ( c == 'E' ) {
                                if ( x[{tx+1, ty}] == 0 ) {
                                        cnt += 5;
                                        x[{tx+1, ty}] = 1;
                                }
                                else
                                        cnt += 1;
                                tx++;
                        }
                        else if ( c == 'W' ) {
                                if ( x[{tx, ty}] == 0 ) {
                                        cnt += 5;
                                        x[{tx, ty}] = 1;
                                }
                                else
                                        cnt += 1;
                                tx--;
                        }
                }

                cout << cnt << endl;
        }

        return 0;
}
