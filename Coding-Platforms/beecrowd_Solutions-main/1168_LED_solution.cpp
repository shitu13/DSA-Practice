#include<stdio.h>
#include<string.h>
main()
{
    int T,i,j,count;
    char a[100];
    scanf("%d", &T);
    while(T--){
         scanf("%s", &a);
         j= strlen(a);
         for(i=0,count=0;i<=j;i++){
            if(a[i]=='1') count+=2;
            if(a[i]=='2'||a[i]=='5'||a[i]=='3') count+=5;
            if(a[i]=='4') count+=4;
            if(a[i]=='6'||a[i]=='9'||a[i]=='0') count+=6;
            if(a[i]=='7') count+=3;
            if(a[i]=='8') count+=7;

         }
         printf("%d leds\n", count);
    }
    return 0;
}
