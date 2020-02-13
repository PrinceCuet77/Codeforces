#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int testCase; 
    cin >> testCase; 
    while ( testCase-- ) {
        string ch; 
        cin >> ch; 
        bool flag = false;
        int start, result = 0;
        for ( int i = 0; i < ch.length(); i++ ) {
            if ( ch[i] == '1' && flag == false ) {
                start = i;
                flag = true;
            } else if ( ch[i] == '1' && flag == true ) {
                result += i - start - 1;
                start = i;
            }
        }
        cout << result << endl; 
    }
    

    return 0;
}
