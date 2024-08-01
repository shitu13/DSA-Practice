#include<stdio.h>
#include<string.h>
main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        char str[50], str1[50];
        int l,l1,k,m,count,i;
        scanf("%s %s", &str,&str1);
        l= strlen(str);
        l1= strlen(str1);
        if(l1>l) printf("nao encaixa\n");
        else if(l1<=l){
            k= l-l1;
            m=0;
            count= 0;
            for(i=k;i<l;i++){
              if(str[i]==str1[m])
                count++;
                m++;
            }
            if(count==l1) printf("encaixa\n");
                else printf("nao encaixa\n");
        }
    }
    return 0;
}

