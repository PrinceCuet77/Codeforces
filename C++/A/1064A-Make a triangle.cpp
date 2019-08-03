#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int a, b, c;
        while ( cin >> a >> b >> c ) {
                if ( a >= b && a >= c ) {
                        if ( a < (b+c) )
                                cout << 0 << endl;
                        else
                                cout << (a-b-c)+1 << endl;
                }
                else if ( b >= a && b >= c ) {
                        if ( b < (a+c) )
                                cout << 0 << endl;
                        else
                                cout << (b-a-c)+1 << endl;
                }
                else if ( c >= a && c >= b ) {
                        if ( c < (a+b) )
                                cout << 0 << endl;
                        else
                                cout << (c-a-b)+1 << endl;
                }
        }

        return 0;
}

