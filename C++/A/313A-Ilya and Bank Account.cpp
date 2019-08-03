#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int Max = n;
                if ( n/10 > Max ) Max = n/10;
                if ( n%10 + (n/100)*10 > Max ) Max = n%10 + (n/100)*10;

                cout << Max << endl;
        }

        return 0;
}

