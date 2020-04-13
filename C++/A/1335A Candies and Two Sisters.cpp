#include <bits/stdc++.h>
using namespace std; 
 
typedef long long ll;
 
int main()
{
        //freopen("file.txt", "r", stdin);
        ll t;       
        cin >> t; 
        while ( t-- ) {
                ll n; 
                cin >> n; 
                if ( n <= 2 ) 
                        cout << 0 << endl; 
                else {
                        if ( n % 2 == 0 ) 
                                cout << n/2 - 1 << endl; 
                        else 
                                cout << n/2 << endl;
                }
        }
        
        return 0;
}
