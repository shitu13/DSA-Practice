#include<stdio.h>
#include<string.h>
main()
{
    char L[600];
    gets(L);
    if(strlen(L)<=80) printf("YES\n");
    else if(strlen(L)>80) printf("NO\n");
    return 0;
}
