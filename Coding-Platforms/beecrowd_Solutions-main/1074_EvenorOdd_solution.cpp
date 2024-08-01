#include<stdio.h>
main()
{
    int a,n;
    scanf("%d", &a);
    while(a--){
        scanf("%d", &n);
        if(n==0) printf("NULL\n");
        else if(n>0&& n%2==0) printf("EVEN POSITIVE\n");
        else if(n>0&& n%2!=0) printf("ODD POSITIVE\n");
        else if(n<0&& n%2==0) printf("EVEN NEGATIVE\n");
        else if(n<0&& n%2!=0) printf("ODD NEGATIVE\n");
    }
}
