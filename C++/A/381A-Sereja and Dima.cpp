#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                int ar[n+5];
                for ( int i = 0; i < n; i++ )
                        cin >> ar[i];

                int player1 = 0, player2 = 0, k = 0, maxi, i = 0, j = n-1;
                while ( i <= j ) {
                        if ( ar[i] >= ar[j] ) {
                                maxi = ar[i];
                                i++;
                        } else {
                                maxi = ar[j];
                                j--;
                        }

                        if ( k % 2 == 0 ) player1 += maxi;
                        else player2 += maxi;

                        k++;
                }

                cout << player1 << " " << player2 << endl;
        }

        return 0;
}

