#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int value;
                vector < int > pro, math, pe;
                for ( int i = 0; i < n; i++ ) {
                        cin >> value;
                        if ( value == 1) pro.push_back(i+1);
                        if ( value == 2 ) math.push_back(i+1);
                        if ( value == 3 ) pe.push_back(i+1);
                }

                int team = min(pro.size(), math.size());
                team = min(team, (int)pe.size());

                cout << team << endl;
                for ( int i = 0; i < team; i++ )
                        cout << pro[i] << " " << math[i] << " " << pe[i] << endl;
        }

        return 0;
}

