/********************************************************************************
*                                                                               *
*        Author     : Rezoan Shakil Prince                                      *
*        Batch      : 14                                                        *
*        Email      : prince.cuet.77@gmail.com                                  *
*        University : Chittagong University of Engineering and Technology       *
*                                                                               *
********************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n, k;
        cin >> n >> k;

        if ( (n-k+1) % 2 != 0 && (n-k+1) > 0 ) {
                cout << "yes" << endl;
                for ( int i = 0; i < k-1; i++ )
                        cout << "1 ";
                cout << n-k+1 << endl;
                return;
        }
        if ( (n-2*(k-1)) % 2 == 0 && (n-2*(k-1)) > 0 ) {
                cout << "yes" << endl;
                for ( int i = 0; i < k-1; i++ )
                        cout << "2 ";
                cout << n-2*(k-1) << endl;
                return;
        }

        cout << "no" << endl;
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        //freopen("input.txt", "r", stdin);

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
