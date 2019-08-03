#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int valm, valc, cntm = 0, cntc = 0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> valm >> valc;
                        if ( valm < valc ) cntc++;
                        else if ( valm > valc ) cntm++;
                }
                if ( cntc == cntm ) cout << "Friendship is magic!^^" << endl;
                else if ( cntc > cntm ) cout << "Chris" << endl;
                else cout << "Mishka" << endl;
        }

        return 0;
}

