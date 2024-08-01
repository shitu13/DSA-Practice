#include<stdio.h>
#include<string.h>
main()
{
    char a[25],ch;
    int l,i;
    scanf("%s", &a);
    for(l=0;a[l];l++);
    for(i=0;i<l/2;i++){
        ch=a[i];
        a[i]= a[l-i-1];
        a[l-i-1]=ch;
    }
    printf("%s\n",a);
    return 0;
}

