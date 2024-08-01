#include<stdio.h>
#include<math.h>
main()
{
    int x1,y1,x2,y2,a,b;
    while(1){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(x1==0&&y1==0&&x2==0&&y2==0) break;
        a= abs(x1-x2);
        b= abs(y1-y2);
        if(a==0&&b==0) printf("%d\n",0);
        else if((a==0&&b!=0)||(b==0&&a!=0)) printf("%d\n",1);
        else if(a==b) printf("%d\n",1);
        else if(a!=b) printf("%d\n",2);
    }
    return 0;
}