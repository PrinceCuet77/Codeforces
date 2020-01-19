#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char ch[105];
    int i,flag = 0;
    scanf("%s",ch);
    int len = strlen(ch);
    for(i = 0; i < len; i++){
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

