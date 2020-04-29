#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt,t,flag;

    while(scanf("%d",&cnt)==1){
        printf("I hate ");
        t=cnt;
        flag=0;
        while(t){
            if(t==1){
                printf("it\n");
                break;
            }
            if(!flag){
                printf("that I love ");
                flag=1;
            }
            else{
                printf("that I hate ");
                flag=0;
            }
            t--;
        }
    }

    return 0;
}
