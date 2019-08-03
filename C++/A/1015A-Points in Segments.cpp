#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                bool ar[m+5];
                memset(ar, false, sizeof(ar));
                ar[0] = true;
                int enter = 0;
                for ( int i =0; i < n; i++ ) {
                        int value1, value2;
                        cin >> value1 >> value2;
                        for ( int j = value1; j <= value2; j++ ) {
                                if ( ar[j] == false ) {
                                        ar[j] = true;
                                        enter++;
                                }
                        }
                }
                cout << m - enter << endl;
                for ( int i = 1; i <= m; i++ ) {
                        if ( ar[i] == false )
                                cout << i << " ";
                }
                cout << endl;

        }

        return 0;
}

