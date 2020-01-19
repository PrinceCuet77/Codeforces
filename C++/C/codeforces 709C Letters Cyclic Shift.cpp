#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
    char ch[100001];
    int i,flag = 0,t = 0;

    scanf("%s",ch);
    int len = strlen(ch);
    while(ch[t] == 'a' && t < len){
        t++;
    }
    if(t == len){
        ch[t-1] = 'z';
    }
    while(ch[t] != 'a' && t < len){
        ch[t]--;
        t++;
    }
    for(int i = 0; i < len; i++){
        printf("%c",ch[i]);
    }

    return 0;
}
