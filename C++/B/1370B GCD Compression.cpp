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

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {  
        int n; 
        cin >> n; 
        
        vector < int > o, e; 
        for ( int i = 0; i < 2 * n; i++ ) {
                int a;
                cin >> a;

                if ( a & 1 ) 
                        o.push_back(i+1);
                else 
                        e.push_back(i+1);
        }

        int t = n - 1;
                
        for ( int i = 0; i/2 < o.size()/2 && t != 0; i += 2, t-- ) 
                cout << o[i] << " " << o[i+1] << endl;
        
        for ( int i = 0; i/2 < (e.size()/2) && t != 0; i += 2, t-- ) 
                cout << e[i] << " " << e[i+1] << endl; 
        cout << endl; 
}

int main()
{
        IOS;

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
