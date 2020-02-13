#include <bits/stdc++.h>
using namespace std; 

int main()
{ 
    //freopen("input.txt", "r", stdin);
    int testCase; 
    cin >> testCase; 

    while ( testCase-- ) {
        int n; 
        cin >> n; 
        
        string ch = "";
        while ( n ) {
            if ( n % 2 == 0 ) {
                ch += "1";
                n -= 2;
            } else {
                ch += "7";
                n -= 3;
            }
        } 

        cout << ch << endl; 
    }

    return 0;
}
