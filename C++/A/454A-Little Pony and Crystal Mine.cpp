#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int s = n / 2;
                for ( int i = 0; i < n/2+1; i++ ) {
                        for ( int j = 0; j < s; j++ ) cout << "*";
                        for ( int j = 0; j < 2 * i + 1; j++ ) cout << "D";
                        for ( int j = 0; j < s; j++ ) cout << "*";
                        s--;
                        cout << endl;
                }

                s = 1;
                int d = n - 2;
                for ( int i = n/2+1; i < n; i++ ) {
                        for ( int j = 0; j < s; j++ ) cout << "*";
                        for ( int j = 0; j < d; j++ ) cout << "D";
                        for ( int j = 0; j < s; j++ ) cout << "*";
                        s++;
                        d -= 2;
                        cout << endl;
                }
        }

        return 0;
}

