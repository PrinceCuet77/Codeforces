#include <bits/stdc++.h>
using namespace std;

void solution() {
        int row, col;
        cin >> row >> col;

        char mat[row][col];
        for ( int i = 0; i < row; i++ ) {
                for ( int j = 0; j < col; j++ )
                        cin >> mat[i][j];
        }

        int cnt = 0, ans = 0;
        for ( int i = 0; i < row; i++ ) {
                for ( int j = 0; j < col; j++ ) {
                        if ( mat[i][j] == 'S' )
                                break;
                        else {
                                if ( j+1 == col ) {
                                        ans += col;
                                        cnt++;
                                }
                        }
                }
        }

        for ( int i = 0; i < col; i++ ) {
                for ( int j = 0; j < row; j++ ) {
                        if ( mat[j][i] == 'S' )
                                break;
                        else {
                                if ( j+1 == row ) {
                                        ans += (row-cnt);
                                }
                        }
                }
        }

        cout << ans << endl;
}

int main()
{
        //freopen("file.txt", "r", stdin);
        solution();

        return 0;
}
