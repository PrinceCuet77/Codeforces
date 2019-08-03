#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int a = 0, b = 1, c = a + b;
                bool flag = false;
                while ( 1 ) {
                        if ( b == c || b+1 == c )
                                cout << "O";
                        else {
                                if ( c <= n ) {
                                        for ( int i = b+1; i < c; i++ )
                                                cout << "o";
                                        cout << "O";
                                }
                                else {
                                        for ( int i = b+1; i <= n; i++ )
                                                cout << "o";
                                }
                        }
                        a = b;
                        b = c;
                        c = a + b;
                        if ( c > n )
                                break;
                }
                if ( c <= n ) {
                        for ( int i = b+1; i < c; i++ )
                                cout << "o";
                                cout << "O";
                }
                else {
                        for ( int i = b+1; i <= n; i++ )
                                cout << "o";
                }
                cout << endl;
        }

        return 0;
}

