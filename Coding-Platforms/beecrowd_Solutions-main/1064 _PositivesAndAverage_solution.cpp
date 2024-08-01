
#include<stdio.h>
main()
{
    int i,count;
    double num,val;
    for(i=0,count=0,val=0;i<=5;i++){
        scanf("%lf", &num);
        if(num>0){ count++;
                    val=val+num;}

}
    printf("%d valores positivos\n%.1lf\n", count,val/count);
}

