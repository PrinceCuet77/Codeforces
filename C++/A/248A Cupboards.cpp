#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( cin >> n ) {
                int leftClose = 0, leftOpen = 0, rightClose = 0, rightOpen = 0; 
                for ( int i = 0; i < n; i++ ) {
                        int l, r; 
                        cin >> l >> r; 
                        
                        if ( l ) leftOpen++; 
                        else leftClose++; 
                        
                        if ( r ) rightOpen++;
                        else rightClose++; 
                }
                
                cout << min(leftClose, leftOpen) + min(rightClose, rightOpen) << endl; 
        }

        return 0;
}
