#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,len,flag = 0;
    char ch[1005][6];

    scanf("%d",&n);
    for( i = 0; i < n; i++ ){
        scanf("%s", ch[i]);
    }

    for( i = 0; i < n; i++ ){
        if(flag)
            break;
        len = strlen(ch[i]);
        for( j = 0; j < len; j++){
            if( j == 0 || j == 3){
                if( (ch[i][j] == 'O' && ch[i][j+1] == 'O') || (ch[i][j] == '0' && ch[i][j+1] == '0') ){
                    ch[i][j] = '+';
                    ch[i][j+1] = '+';
                    flag = 1;
                }
            }
            if(flag)
                break;
        }
    }

    if(!flag)
        printf("NO\n");
    else{
        printf("YES\n");
        for( i = 0; i < n; i++ ){
            printf("%s\n", ch[i]);
        }
    }

    return 0;
}

