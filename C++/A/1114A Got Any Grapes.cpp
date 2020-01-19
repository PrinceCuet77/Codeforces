#include <bits/stdc++.h>
using namespace std;

int main()
{
        int first, second, third, green, purple, black;
        while ( cin >> first >> second >> third ) {
                cin >> green >> purple >> black;

                if ( green < first ) {
                        cout << "NO" << endl;
                        continue;
                } else {
                        green -= first;
                        first = 0;
                }

                if ( green + purple < second ) {
                        cout << "NO" << endl;
                        continue;
                } else {
                        if ( second >= green ) {
                                second -= green;
                                green = 0;
                        } else {
                                green -= second;
                                second = 0;
                        }

                        if ( second >= purple ) {
                                second -= purple;
                                purple = 0;
                        } else {
                                purple -= second;
                                second = 0;
                        }
                }

                if ( green + purple + black < third ) {
                        cout << "NO" << endl;
                        continue;
                } else {
                        third -= green;
                        third -= purple;
                        third -= black;
                }

                if ( first <= 0 && second <= 0 && third <= 0 )
                        cout << "YES" << endl;
                else
                        cout << "NO" << endl;
        }

        return 0;
}

