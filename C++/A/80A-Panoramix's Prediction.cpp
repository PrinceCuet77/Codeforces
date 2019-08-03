#include<bits/stdc++.h>
using namespace std;

#define N 55

bool status[N+5];
void sieve() {
        int sq = sqrt(N)+1;
        for ( int i = 4; i <= N; i += 2 )
                status[i] = 1;
        for ( int i = 3; i <= sq; i += 2 ) {
                if ( status[i] == 0 ) {
                        for ( int j = i * i; j <= N; j += 2 * i )
                                status[j] = 1;
                }
        }
}

int main()
{
        //freopen("file.text", "r", stdin);
        sieve();
        int n, m;
        while ( cin >> n >> m ) {
                bool flag = false;
                for ( int i = n+1; i <= m+1; i++ ) {
                        if ( status[i] == 0 ) {
                                if ( i == m )
                                        flag = true;
                                break;
                        }
                }
                flag == true ? cout << "YES" << endl : cout << "NO" << endl;
        }

        return 0;
}

