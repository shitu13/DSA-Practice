#include<stdio.h>
#include<string.h>
main()
{
    int a,b,N;
    char c;
    scanf("%d", &N);
    while(N--){
    scanf("%d %c %d", &a,&c,&b);
    if(a==b) printf("%d\n", a*b);
    else if(c>='A'&&c<='Z') printf("%d\n",b-a);
    else if(c>='a'&&c<='z') printf("%d\n",a+b);
    }
    return 0;
}
