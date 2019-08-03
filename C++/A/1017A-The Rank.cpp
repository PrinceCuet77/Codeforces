#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int sum = 0, cnt = 0;
                for ( int i = 0; i < n; i++ ) {
                        int total = 0;
                        for ( int k = 0; k < 4; k++ ) {
                                int value;
                                cin >> value;
                                if ( i == 0 ) sum += value;
                                else total += value;
                        }
                        if ( i != 0 )
                                if ( sum < total )
                                        cnt++;
                }
                cout << ++cnt << endl;
        }

        return 0;
}

