#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                string ch;
                cin >> ch;
                int cnt = 0;
                bool flag = false;
                for ( int i = 0; i < n; i++ ) {
                        if ( ch[i] == 'x' && ch[i+1] == 'x' && ch[i+2] == 'x' && !flag ) {
                                i += 2;
                                cnt++;
                                flag = true;
                        }
                        else if ( ch[i] == 'x' && flag )
                                cnt++;
                        else
                                flag = false;
                }
                cout << cnt << endl;
        }

        return 0;
}

