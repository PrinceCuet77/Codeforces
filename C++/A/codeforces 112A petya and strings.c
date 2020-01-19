#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char ch1[105],ch2[105];

    scanf("%s %s",ch1,ch2);
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    for(i = 0; i < len1; i++){
        if(ch1[i] >= 'A' && ch1[i] <= 'Z')
            ch1[i] = 97 + (ch1[i] - 'A');
    }
    for(i = 0; i < len1; i++){
        if(ch2[i] >= 'A' && ch2[i] <= 'Z')
            ch2[i] = 97 + (ch2[i] - 'A');
    }
    printf("%d\n",strcmp(ch1,ch2));

    return 0;
}
