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
        ll t, sx, sy, ex, ey; 
        while ( cin >> t >> sx >> sy >> ex >> ey ) {
                string ch; 
                cin >> ch; 

                int e = 0, w = 0, s = 0, n = 0; 

                if ( (ex - sx) > 0 ) e = ex - sx;
                else if ( (ex - sx) < 0 ) w = ex - sx; 

                if ( (ey - sy) > 0 ) n = ey - sy; 
                else if ( (ey - sy) < 0 ) s = ey - sy; 

                int cnt = 0;
                bool flag = false;
                for ( int i = 0; i < ch.length(); i++, cnt++ ) {
                        if ( ex == sx && ey == sy ) {
                                flag = true; 
                                break;
                        }

                        if ( n && ch[i] == 'N' ) {
                                sy++; 
                                n--;
                        } 
                        else if ( w && ch[i] == 'W' ) {
                                sx--;
                                w--;
                        }
                        else if ( s && ch[i] == 'S' ) {
                                sy--;
                                s--;
                        }
                        else if ( e && ch[i] == 'E' ) {
                                sx++;
                                e++;
                        }
                } 

                if ( ex == sx && ey == sy ) 
                        flag = true; 

                if ( flag ) cout << cnt << endl; 
                else cout << -1 << endl; 
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
                
        solve();

        return 0;
}
