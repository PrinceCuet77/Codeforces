#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        char ch;
        set < char > st;
        while ( cin >> ch ) {
                if ( ch == '}' )
                        break;
                else if ( ch == '{' || ch == ',' )
                        continue;
                else
                        st.insert(ch);
        }

        cout << st.size() << endl;

        return 0;
}
