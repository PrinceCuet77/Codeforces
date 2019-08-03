#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ar[n+5];
                map < int, int > mp;
                for ( int i = 0; i < n; i++ )
                        cin >> ar[i];

                vector < int > vec;
                for ( int i = n-1; i >= 0; i-- ) {
                        mp[ar[i]]++;
                        if ( mp[ar[i]] == 1 )
                                vec.push_back(ar[i]);
                }

                cout << vec.size() << endl;
                for ( int i = vec.size()-1; i >= 0; i-- )
                        cout << vec[i] << " ";
                cout << endl;
        }

        return 0;
}

