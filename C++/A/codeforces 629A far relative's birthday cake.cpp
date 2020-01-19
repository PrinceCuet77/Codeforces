#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, k, cnt = 0;
    char v[101][101];
    cin >> n;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            cin >> v[i][j];
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            for(k = i+1; k < n; k++){
                if(v[i][j] == 'C'  && (v[i][j] == v[k][j]))
                    cnt++;
            }
            for(k = j+1; k < n; k++){
                if(v[i][j] == 'C' && v[i][j] == v[i][k])
                    cnt++;
            }
        }
    }
    printf("%d\n", cnt);

    return 0;
}
