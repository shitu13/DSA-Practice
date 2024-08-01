#include<stdio.h>
main()
{
    int T;
    double a,b,c1=0,c2=0,c3=0,c4=0,c5=0;
    scanf("%d", &T);
    while(T--){
        scanf("%lf %lf", &a,&b);
        if(a==1001) c1= 1.5*b;
        else if(a==1002.0) c2= 2.5*b;
        else if(a==1003.0) c3= 3.5*b;
        else if(a==1004.0) c4= 4.5*b;
        else if(a==1005.0) c5= 5.5*b;
    }
     printf("%.2lf\n", c1+c2+c3+c4+c5);
     return 0;
}
