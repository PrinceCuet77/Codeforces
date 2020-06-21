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
#define N 100005

bool status[N];
void sieve() {
        status[0] = status[1] = true; 

        for ( int i = 2; i * i <= N; i++ ) {
                if ( status[i] == false ) {
                        for ( int j = i * i; j <= N; j += i ) 
                                status[j] = true;
                }
        }
}

void solve() {  
        sieve();

        int n, k; 
        while ( cin >> n >> k ) {
                vector < int > prime; 
                for ( int i = 2; i <= n; i++ ) 
                        if ( status[i] == false ) 
                                prime.push_back(i);
                
                int cnt = 0;
                for ( int i = 0; i < prime.size()-1; i++ ) {
                        int val = prime[i] + prime[i+1] + 1;
                        if ( status[val] == false && val <= n )
                                cnt++;
                }

                if ( cnt >= k ) cout << "YES" << endl; 
                else cout << "NO" << endl; 
        }
}

int main()
{
        IOS;

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        solve();

        return 0;
}
