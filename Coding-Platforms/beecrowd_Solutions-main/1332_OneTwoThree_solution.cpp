#include<stdio.h>
#include<string.h>
main()
{
    int T,i,j;
    char ch[10];
    scanf("%d", &T);
    while(T--){
        scanf("%s", &ch);
        j= strlen(ch);
        if(j<=3){
            if((ch[0]=='o'&&ch[2]=='e')||(ch[0]=='o'&&ch[1]=='n')||(ch[1]=='n'&&ch[2]=='e'))
                printf("1\n");
            else printf("2\n");
        }
        else printf("3\n");
    }
    return 0;
}
