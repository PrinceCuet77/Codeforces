#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, k;
        while ( cin >> n >> k ) {
                int value;
                map < int, int > mp;
                vector < int > vec;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        mp[value]++;
                        if ( mp[value] == 1 ) vec.push_back(i+1);
                }

                if ( vec.size() >= k ) {
                        cout << "YES" << endl;
                        for ( int i = 0; i < k; i++ )
                                cout << vec.at(i) << " ";
                        cout << endl;
                } else
                        cout << "NO" << endl;
        }

        return 0;
}

