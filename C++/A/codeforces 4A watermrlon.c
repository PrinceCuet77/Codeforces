#include<stdio.h>

int main()
{
    int w,t1,t2;

    scanf("%d",&w);

    t1 = w - 2;
    if(w == 2){
        printf("NO\n");
        return 0;
    }

    if(w % 2 == 0 && t1 % 2 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
