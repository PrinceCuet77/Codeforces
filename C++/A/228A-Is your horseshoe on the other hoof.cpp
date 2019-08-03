#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        long long a;
        while ( cin >> a ) {
                set < long long > st;
                st.insert(a);
                for ( int i = 0; i < 3; i++ ) {
                        cin >> a;
                        st.insert(a);
                }

                cout << 4 - st.size() << endl;
        }

        return 0;
}

