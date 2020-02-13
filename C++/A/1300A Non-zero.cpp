#include <bits/stdc++.h>
using namespace std; 

int main()
{ 
    int testCase; 
    cin >> testCase; 

    while ( testCase-- ) {
        int n; 
        cin >> n; 

        int temp, sum = 0, mul = 0;
        for ( int i = 0; i < n; i++ ) {
            cin >> temp; 
            if ( temp == 0 ) 
                mul++;
            sum += temp;
        }

        int cnt = mul;
        if ( sum + cnt == 0 ) 
            cnt++;

        cout << cnt << endl; 
    }

    return 0;
}
