#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int v[100];
    int n, flag = 0, cnt = 0, index = 0, c = 0, i;
    string ch;
    cin >> n;
    cin >> ch;
    int len = ch.length();
    for(i = 0; i < len; i++){
        if(ch[i] == 'B'){
            if(!flag){
                cnt++;
                flag = 1;
            }
            v[index] = ++c;
        }
        else if(ch[i] == 'W'){
            flag = c = 0;
            if(ch[i+1] == 'B')
                index++;
        }
        if(i == 0 && ch[i] == 'W')
            index--;
    }
    cout << cnt << endl;
    if(cnt){
        for(i = 0; i < cnt; i++)
            cout << v[i] << " ";
    }
    else
        return 0;

    return 0;
}
