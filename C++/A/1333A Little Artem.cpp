#include <bits/stdc++.h>
using namespace std; 
 
int main()
{
        //freopen("file.txt", "r", stdin); 
        int t; 
        cin >> t; 
        
        while ( t-- ) {
                int n, m; 
                cin >> n >> m; 
                
                if ( (n * m) % 2 == 1 ) {
                        bool flag = false; 
                        for ( int i = 0; i < n; i++ ) {
                                for ( int j = 0; j < m; j++ ) {
                                        if ( flag == false ) {
                                                cout << "B"; 
                                                flag = true; 
                                        } else {
                                                cout << "W"; 
                                                flag = false;
                                        }
                                }
                                cout << endl; 
                        }
                } else {
                        for ( int i = 0; i < n-1; i++ ) {
                                for ( int j = 0; j < m; j++ ) 
                                        cout << "B";
                                cout << endl;
                        }
                        
                        for ( int i = 0; i < 1; i++ ) {
                                for ( int j = 0; j < m-1; j++ ) 
                                        cout << "B"; 
                                cout << "W" << endl; 
                        }
                }
                
        }
        
        return 0; 
}
