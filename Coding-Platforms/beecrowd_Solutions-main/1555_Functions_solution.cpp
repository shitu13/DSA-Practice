#include<stdio.h>
#include<math.h>
main()
{
    int T,r,x,y,b,c;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &x,&y);
        r= pow((3*x),2)+pow(y,2);
        b= 2*pow(x,2)+pow((5*y),2);
        c= -100*x+pow(y,3);
        if(r>b&&r>c) printf("Rafael ganhou\n");
        if(b>r&&b>c) printf("Beto ganhou\n");
        if(c>r&&c>b) printf("Carlos ganhou\n");
    }
    return 0;
}
