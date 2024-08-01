#include<stdio.h>
#include<math.h>
main()
{
    int n,T;
    char ch[20];
    scanf("%d", &T);
    while(T--){
    scanf("%s %d", ch,&n);
    if(ch[0]=='T'&&ch[1]=='h'&&ch[2]=='o'&&ch[3]=='r')
        printf("Y\n");
    else
     printf("N\n");
    }
    return 0;
}
