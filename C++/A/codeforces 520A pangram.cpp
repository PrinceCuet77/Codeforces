#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int alpha[30];
int main()
{
    int n, cnt = 0, flag = 0;
    char ch[105];
    scanf("%d", &n);
    getchar();
    gets(ch);
    if(n < 26){
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0; i < n; i++){
        if((ch[i] >= 'A' && ch[i] <= 'Z')){
            int t = (int)ch[i] - (int)'A';
            alpha[t] = 1;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            int t = (int)ch[i] - (int)'a';
            alpha[t] = 1;
        }
    }
    for(int i = 0; i < 26; i++){
        if(alpha[i] == 0){
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
