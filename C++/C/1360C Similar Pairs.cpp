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

bool check(int a[], int n) {
        for ( int i = 0; i < n-1; i++ ) 
                if ( a[i+1] == a[i]+1 ) 
                        return true;
        
        return false;
}

void solve() {
        int n; 
        while ( cin >> n ) { 
                int a[n], odd = 0, even = 0; 
                for ( int i = 0; i < n; i++ ) {
                        cin >> a[i];
                        if ( a[i] & 1 ) odd++; 
                        else even++;
                }

                if ( (odd & 1) == 0 || (even & 1) == 0 || odd == 0 || even == 0 ) {
                        cout << "yes\n"; 
                        return; 
                }

                sort(a, a+n);
                bool flag = check(a, n); 

                if ( flag ) cout << "yes\n"; 
                else cout << "no\n";
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

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
