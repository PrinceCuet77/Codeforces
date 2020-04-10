#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int a, b;
        while ( cin >> a >> b ) {
                if ( a == b ) {
                        cout << 0 << " " << 6 << " " << 0 << endl;
                        continue;
                }
                int draw = abs(b-a)-1;
                if ( draw % 2 == 0 ) {
                        if ( a <= b )
                                cout << a+draw/2 << " " << 0 << " " << (6-b)+1+draw/2 << endl;
                        else
                                cout << (6-a)+1+draw/2 << " " << 0 << " " << b+draw/2 << endl;
                }
                else {
                        if ( a <= b )
                                cout << a+draw/2 << " " << 1 << " " << (6-b)+1+draw/2 << endl;
                        else
                                cout << (6-a)+1+draw/2 << " " << 1 << " " << b+draw/2 << endl;
                }
        }

        return 0;
}
