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

typedef long long ll; 

void solve() { 
        ll mat[6][6]; 
        for ( int i = 1; i <= 5; i++ ) 
                for ( int j = 1; j <= 5; j++ ) 
                        cin >> mat[i][j];

        ll p[6];
        for ( int i = 1; i <= 5; i++ ) 
                p[i] = i;
                
        ll sum, ans = -1; 
        do {
                sum = (mat[p[1]][p[2]] + mat[p[2]][p[1]] + mat[p[3]][p[4]] + mat[p[4]][p[3]]);
                sum += (mat[p[2]][p[3]] + mat[p[3]][p[2]] + mat[p[4]][p[5]] + mat[p[5]][p[4]]);

                sum += (mat[p[3]][p[4]] + mat[p[4]][p[3]]); 
                sum += (mat[p[4]][p[5]] + mat[p[5]][p[4]]); 

                if ( sum > ans ) ans = sum;
        } while ( next_permutation(p+1, p+6) );

        cout << ans << endl;
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        solve();

        return 0;
}
