#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                deque < int > dq;
                for ( int i = 0; i < n; i++ ) {
                        int t;
                        cin >> t;
                        dq.push_back(t);
                }

                int cnt = 0;
                while ( 1 ) {
                        if ( dq.empty() )
                                break;
                        if ( dq.front() <= m ) {
                                dq.pop_front();
                                cnt++;
                        }
                        else
                                break;
                }

                while ( 1 ) {
                        if ( dq.empty() )
                                break;
                        if ( dq.back() <= m ) {
                                dq.pop_back();
                                cnt++;
                        }
                        else
                                break;
                }

                cout << cnt << endl;
        }

        return 0;
}

