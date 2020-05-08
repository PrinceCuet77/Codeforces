#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int tc;
        cin >> tc;
        while ( tc-- ) {
                int a1, b1, a2, b2;
                cin >> a1 >> b1;
                cin >> a2 >> b2;

                int length1 = max(a1, b1);
                int width1 = min(a1, b1);

                int length2 = max(a2, b2);
                int width2 = min(a2, b2);

                if ( length1 == length2 ) {
                        if ( width1 + width2 == length1 )
                                cout << "yes" << endl;
                        else
                                cout << "no" << endl;
                }
                else
                        cout << "no" << endl;
        }

        return 0;
}
