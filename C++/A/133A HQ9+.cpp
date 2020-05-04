#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string ch;
    cin >> ch;
    int len = ch.length();
    int flag = 0;
    for(int i = 0; i < len; i++){
        if(ch[i] == 'H' || ch[i] == 'Q' || ch[i] == '9'){
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
