
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int T,a,b,i,temp,sum=0;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2!=0)
        {
            for(i=a+2,sum=0;i<b;i++){
                if(i%2!=0)
                sum=sum+i;
            }
        }
        else
        {
            for(i=a+1,sum=0;i<b;i++){
                if(i%2!=0)
                sum=sum+i;
            }
        }
        printf("%d\n", sum);
    }

}
