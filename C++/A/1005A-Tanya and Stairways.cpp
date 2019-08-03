#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ck, value, cnt = 0;
                vector < int > vec;
                cin >> ck;
                cnt++;
                for ( int i = 1; i < n; i++ ) {
                        cin >> value;
                        if ( ck < value ) cnt++;
                        else {
                                vec.push_back(cnt);
                                cnt = 1;
                        }
                        ck = value;
                }
                if ( cnt ) vec.push_back(cnt);
                cout << vec.size() << endl;
                for ( int i = 0; i < vec.size(); i++ )
                        cout << vec[i] << " ";
                cout << endl;
        }

        return 0;
}

