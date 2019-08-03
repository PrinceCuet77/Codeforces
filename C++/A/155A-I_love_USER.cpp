#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int value, mini, maxi, cntMin = 0, cntMax = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        if ( i == 0 ) {
                                mini = value;
                                maxi = value;
                                continue;
                        }
                        if ( value < mini ) {
                                cntMin++;
                                mini = value;
                        }
                        if ( value > maxi ) {
                                cntMax++;
                                maxi = value;
                        }
                }
                cout << (cntMin + cntMax) << endl;
        }

        return 0;
}

