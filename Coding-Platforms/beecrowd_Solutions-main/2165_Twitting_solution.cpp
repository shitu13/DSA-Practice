#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char a[600];
    gets(a);
    if(strlen(a)<=140) printf("TWEET\n");
    else if(strlen(a)>140) printf("MUTE\n");
}
