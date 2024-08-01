#include<stdio.h>
main()
{
    int a,b,i,n,c;
    int bill[15]={7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};
    while(1)
    {
        scanf("%d %d", &a,&b);
        if(a==0&&b==0)
            break;
        n= b-a;
        for(i=0,c=0;i<15;i++)
        {
            if(bill[i]==n)
            {
                c=1;
                break;
            }
        }
        if(c) printf("possible\n");
        else printf("impossible\n");
    }
    return 0;

}
